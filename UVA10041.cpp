#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int r[500],t,midpoint,n,sum;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        sum = 0;

        for(int j=0;j<n;j++)
        {
            scanf("%d",&r[j]);
        }
        sort(r,r+n);
        if(n%2==0)
        {
            midpoint = (r[(n-1)/2] + r[(n-1)/2+1]) / 2;
        }
        else
        {
            midpoint = r[n/2];
        }
        for(int j=0;j<n;j++)
        {
            if(r[j]>midpoint)
            {
                sum += r[j] - midpoint;
            }
            else
            {
                sum += midpoint- r[j];
            }
        }
        printf("%d\n",sum);
    }
}
