#include<stdio.h>
#include<algorithm>
unsigned short int num[1000000];
int search(int n,int target)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(target == num[i])
        {
            sum++;
        }
    }
    return sum;
}
int main()
{
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%hu",&num[i]);
        }
        std::sort(num, num+n);
        if(n%2==0)
        {
            if(num[n/2]==num[n/2-1])
            {
                printf("%d %d 1\n", num[n/2], search(n, num[n/2]));
            }
            else
            {
                printf("%d %d %d\n", num[n/2-1], search(n, num[n/2])+search(n, num[n/2-1]), num[n/2]-num[n/2-1]+1);
            }
        }
        else
        {
            printf("%d %d 1\n", num[n/2], search(n, num[n/2]));
        }
    }
}
