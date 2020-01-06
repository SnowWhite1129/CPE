#include<stdio.h>
int bin(int n)
{
    int sum=0;
    while(n>0)
    {
        if(n%2==1)
        {
            sum++;
        }
        n/=2;
    }
    return sum;
}
void Print(int n)
{
    if(n>0)
    {
        Print(n/2);
        if(n%2==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        printf("The parity of ");
        Print(n);
        printf(" is %d (mod 2).\n",bin(n));
        scanf("%d", &n);
    }
}
