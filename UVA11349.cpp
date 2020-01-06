#include<stdio.h>
#include<ctype.h>
bool symmetric(long long int matrix[100][100], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]!=matrix[n-1-i][n-1-j]||matrix[i][j]<0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int t;
    long long int matrix[100][100];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char c;
        int num=0;
        while(scanf("%c",&c))
        {
            if(isdigit(c))
            {
                num += c - '0';
                while(scanf("%c",&c))
                {
                    if(isdigit(c))
                    {
                        num*=10;
                        num+= c-'0';
                    }
                    else
                    {
                        break;
                    }
                }
                break;
            }
        }
        for(int j=0;j<num;j++)
        {
            for(int k=0;k<num;k++)
            {
                scanf("%lld",&matrix[j][k]);
            }
        }
        if(symmetric(matrix, num))
        {
            printf("Test #%d: Symmetric.\n",i+1);
        }
        else
        {
            printf("Test #%d: Non-symmetric.\n",i+1);
        }
    }
}
