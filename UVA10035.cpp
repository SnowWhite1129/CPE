#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld%lld",&a,&b);
    while(a!=0||b!=0)
    {
        int sum=0, carry=0;
        while(a>0||b>0)
        {
            int i,j;
            i = a%10;
            j = b%10;
            a/=10;
            b/=10;
            if(i+j+carry>=10)
            {
                carry = 1;
                sum++;
            }
            else
            {
                carry = 0;
            }
        }
        if(sum==0)
        {
            printf("No carry operation.\n");
        }
        else if(sum==1)
        {
            printf("%d carry operation.\n", sum);
        }
        else
        {
            printf("%d carry operations.\n", sum);
        }
        scanf("%lld%lld",&a,&b);
    }
}
