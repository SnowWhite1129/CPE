#include<stdio.h>
#include<string>
#include<stdlib.h>
int mult(char num[])
{
    int sum=0,n=0;
    for(int i=0;num[i]!='\0';i++)
    {
        sum += num[i] - '0';
    }
    if(sum%9==0)
    {
        n++;
        while(sum>10)
        {
            int temp = 0;
            while(sum>0)
            {
                temp += sum %10;
                sum /= 10;
            }
            if(temp % 9==0)
            {
                n++;
                sum = temp;
            }
        }
    }
    return n;
}
int main()
{
    char num[1001];
    gets(num);
    while(num[0]!='0')
    {
        int degree;
        degree = mult(num);
        if(degree>0)
        {
            printf("%s is a multiple of 9 and has 9-degree %d.\n",num,degree);
        }
        else
        {
            printf("%s is not a multiple of 9.\n",num);
        }
        gets(num);
    }
}
