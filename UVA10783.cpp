#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b,total=0;
        scanf("%d%d", &a, &b);
        for(int i=a;i<=b;i++)
        {
            if(i%2==1)
            {
                total+=i;
            }
        }
        printf("Case %d: %d\n",i+1,total);
    }
}
