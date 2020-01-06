#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,p,policy[100],sum=0;
        scanf("%d%d",&n,&p);
        for(int j=0;j<p;j++)
        {
            scanf("%d",&policy[j]);
        }
        bool day[3650] = {false};
        for(int j=0;j<p;j++)
        {
            for(int k=policy[j]-1;k<n;k+=policy[j])
            {
                day[k] = true;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(j%7!=5 && j%7!=6 && day[j]==true)
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }
}
