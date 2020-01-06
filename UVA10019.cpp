#include<stdio.h>
int bin(int num)
{
    int n=0;
    while(num>0)
    {
        if(num%2==1)
        {
            n++;
        }
        num /= 2;
    }
    return n;
}
int hex(int num)
{
    int sum=0;
    for(int i=0,n=1;num>0;i++,n*=16)
    {
        sum += (num%10) * n;
        num /= 10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int num,b1,b2;
        scanf("%d",&num);
        b1 = bin(num);
        b2 = bin(hex(num));
        printf("%d %d\n",b1,b2);
    }
}
