#include<stdio.h>
long long int step(int a, int b, int c, int d)
{
    long long int sum = b+c;
    int k=a+b+1,l=c+d;
    if(a+b == c+d)
    {
        return c-a;
    }
    sum -= k*(k+1)/2;
    sum += l*(l+1)/2;
    return sum+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        printf("Case %d: %lld\n",i,step(a,b,c,d));
    }
}
