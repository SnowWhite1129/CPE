#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if( b>a || (a+b)%2!=0 || (a-b)%2!=0)
        {
            printf("impossible\n");
        }
        else
        {
            printf("%d %d\n",(a+b)/2,(a-b)/2);
        }
    }
}
