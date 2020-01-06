#include<stdio.h>
#include<cstring>
int main()
{
    char num[1001];
    int n[1001];
    gets(num);
    while(strcmp("0",num)!=0)
    {
        int sum=0;
        for(int i=0;num[i]!='\0';i++)
        {
            n[i] = num[i] - '0';
            if(i%2==0)
            {
                sum-=n[i];
            }
            else
            {
                sum+=n[i];
            }
        }
        if(sum%11==0)
        {
            printf("%s is a multiple of 11.\n",num);
        }
        else
        {
            printf("%s is not a multiple of 11.\n",num);
        }
        gets(num);
    }
}
