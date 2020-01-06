#include<stdio.h>
#include<utility>
#include<algorithm>
using namespace std;
int cost[36];
bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}
int convert(int num, int base)
{
    int sum = 0;
    while(num>0)
    {
        sum += cost[(num % base)];
        num /= base;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        for(int j=0;j<36;j++)
        {
            scanf("%d",&cost[j]);
        }
        int n;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            int num;
            scanf("%d",&num);
            printf("Cheapest base(s) for number %d:",num);
            pair <int,int> solution[35];
            for(int k=2;k<=36;k++)
            {
                solution[k-2] = make_pair(k,convert(num,k));
            }
            sort(solution, solution+35, cmp);
            printf(" %d",solution[0].first);
            for(int k=1;k<35;k++)
            {
                if(solution[k].second == solution[k-1].second)
                {
                    printf(" %d",solution[k].first);
                }
                else
                {
                    break;
                }
            }
            printf("\n");
        }
        if(i<t)
        {
            printf("\n");
        }
    }
}
