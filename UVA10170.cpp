#include<stdio.h>
int main()
{
    long long int s, d;
    while(scanf("%lld%lld",&s,&d)!=EOF)
    {
        long long int i;
        for(i=s;d>0;i++)
        {
            d-=i;
        }
        printf("%lld\n", i-1);
    }
}
