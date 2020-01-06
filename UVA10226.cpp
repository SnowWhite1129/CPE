#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    getchar();
    for(int i=0;i<n;i++)
    {
        int sum=0;
        map <string, int> species;
        char tree[31];
        while(gets(tree))
        {
            if(strlen(tree)==0)
            {
                break;
            }
            map<string, int>::iterator iter;
            iter = species.find(tree);
            if(iter==species.end())
            {
                species.insert(pair<string, int>(tree, 1));
            }
            else
            {
                species[(string)tree]++;
            }
            sum++;
        }
        for(map<string, int>::iterator iter = species.begin();iter!=species.end();iter++)
        {
            cout << iter->first;
            printf(" %.4f\n", (double)(iter->second * 100) / (double)sum);
        }
        if(i!=n-1)
        {
            printf("\n");
        }
        species.clear();
    }
}
