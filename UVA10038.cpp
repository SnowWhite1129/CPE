#include<stdio.h>
bool jolly(const int num[], const int n)
{
    bool d[3000] = {false};
    for(int i=0; i<n-1; i++)
    {
        if(num[i]>num[i+1])
        {
            d[num[i]-num[i+1]] = true;
        }
        else
        {
            d[num[i+1]-num[i]] = true;
        }
    }
    for(int i=1; i<n; i++)
    {
        if(d[i]!=true)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, num[3000];
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&num[i]);

        }
        if(jolly(num, n))
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}
