#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int start = a, end = b;
        int max=0;
        if(a>b)
        {
            start = b;
            end = a;
        }
        for(int i=start; i<=end; i++)
        {
            int count = 1, num=i;
            while(num>1)
            {
                if(num%2==0)
                {
                    num/=2;
                }
                else
                {
                    num = 3*num+1;
                }
                count++;
            }
            if(count>max)
            {
                max = count;
            }
        }
        printf("%d %d %d\n",a,b,max);
    }
}
