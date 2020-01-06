#include<stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    for(int i=1;n>0;i++)
    {
        int count=0;
        while(n>1)
        {
            n/=2;
            count++;
        }
        printf("Case %d: %d\n", i,count);
        scanf("%f", &n);
    }
    return 0;
}
