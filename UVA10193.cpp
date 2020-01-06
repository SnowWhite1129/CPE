#include<stdio.h>
int convert(char input[])
{
    int sum=0;
    for(int i=0;input[i]!='\0';i++)
    {
        sum *= 2;
        sum += input[i] - '0';
    }
    return sum;
}
bool gcd(int m, int n)
{
    int t=1;
    while(t!=0)
    {
        t = m%n;
        m = n;
        n = t;
    }
    return m>1;
}
int main()
{
    int n;
    char c;
    scanf("%d",&n);
    scanf("%c",&c);
    for(int i=1;i<=n;i++)
    {
        char s[31],l[31];
        gets(s);
        gets(l);
        int a,b;
        a = convert(s);
        b = convert(l);
        if(gcd(a,b))
        {
            printf("Pair #%d: All you need is love!\n",i);
        }
        else
        {
            printf("Pair #%d: Love is not all you need!\n",i);
        }
    }
}
