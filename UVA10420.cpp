#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    string country[2000];
    for(int i=0;i<n;i++)
    {
        char input[76];
        cin >> country[i];
        gets(input);
    }
    sort(country, country+n);
    for(int i=0;i<n;)
    {
        int count = 1 , j;
        for(j=i+1;j<n;j++)
        {
            if(country[i]==country[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << country[i] << " " << count << "\n";
        i = j;
    }
}
