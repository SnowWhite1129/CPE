#include<stdio.h>
int gcd(int m, int n)
{
    int temp=1;
    while(temp!=0)
    {
        temp = m%n;
        m = n;
        n = temp;
    }
    return m;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int g=0;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                g+=gcd(i,j);
            }
        }
        printf("%d\n",g);
        scanf("%d",&n);
    }
}
