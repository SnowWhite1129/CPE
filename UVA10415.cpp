#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<cstring>
#include<iostream>
using namespace std;
int convert(char c, vector<char> table)
{
    for(int i=0;i<table.size();i++)
    {
        if(c==table.at(i))
        {
            return i;
        }
    }
    return -1;
}
void count(char input, vector<char> table, vector<int> finger[], int times[], bool status[])
{
    bool check[10] = {false};
    int index = convert(input, table);
    if(index<0)
    {
        printf("Error\n");
    }
    for(int i=0;i<finger[index].size();i++)
    {
        //printf("%d %s",finger[index].at(i), status[finger[index].at(i)]?"true":"false");
        if(status[finger[index].at(i)]==false)
        {
            times[finger[index].at(i)]++;
            status[finger[index].at(i)] = true;
        }
        check[finger[index].at(i)] = true;
    }
    //printf("\n");
    for(int i=0;i<10;i++)
    {
        if(check[i]==false && status[i]==true)
        {
            status[i] = false;
        }
    }
}
void init(vector <int> finger[], int a, int b, int offset)
{
    for(int i=a;i<b;i++)
    {
        if(i!=4 && i!=5)
        {
            finger[offset].push_back(i);
        }
    }
    for(int i=offset+1,len=finger[offset].size()-1;i<7+offset && i<14;i++,len--)
    {
        for(int j=0;j<len;j++)
        {
            finger[i].push_back(finger[offset].at(j));
        }
    }
}
void Print(vector<int> finger[])
{
    for(int i=0;i<14;i++)
    {
        printf("Case %d: ",i);
        for(int j=0;j<finger[i].size();j++)
        {
            printf("%d ", finger[i].at(j));
        }
        printf("\n");
    }
}
int main()
{
    vector <char> table;
    for(char input = 'c'; input<='g';input++)
    {
        table.push_back(input);
    }
    table.push_back('a');
    table.push_back('b');
    for(int i=0;i<7;i++)
    {
        table.push_back(toupper(table.at(i)));
    }
    vector <int> finger[14];
    init(finger, 1, 10, 0);
    finger[7].push_back(2);
    init(finger, 0, 9 ,8);
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        bool status[10]={false};
        int times[10] ={0};
        char str[201];
        gets(str);
        for(int j=0;j<strlen(str);j++)
        {
            count(str[j], table, finger, times, status);
        }
        for(int j=0;j<9;j++)
        {
            printf("%d ", times[j]);
        }
        printf("%d\n",times[9]);
    }
}
