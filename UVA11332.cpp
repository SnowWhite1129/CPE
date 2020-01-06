#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        while(n>=10)
        {
            int sum=0;
            while(n>0)
            {
                sum += n%10;
                n/=10;
            }
            n = sum;
        }
        printf("%d\n",n);
        scanf("%d",&n);
    }
}
