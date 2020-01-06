#include<stdio.h>
#include<ctype.h>
#define num 10000
int convert(char c)
{
    if(isdigit(c))
    {
        return c - '0';
    }
    else if(isalpha(c))
    {
        if(islower(c))
        {
            return c - 'a' + 36;
        }
        else
        {
            return c - 'A' + 10;
        }
    }
    else
    {
        return -1;
    }
}
int divide(const char input[], int min)
{
    if(min==0)
    {
        return 1;
    }
    else
    {
        int sum=0;
        for(int i=0; input[i]!='\0'; i++)
        {
            if(convert(input[i])!=-1)
            {
                sum += convert(input[i]);
            }
        }
        for(int i=min; i<63; i++)
        {
            if(sum%i==0)
            {
                return i;
            }
        }
    }
    return 0;
}
int main()
{
    char input[num];
    while(gets(input)!=nullptr)
    {
        int max=0,count;
        for(count=0; input[count]!='\0'; count++)
        {
            if(convert(input[count])>max)
            {
                max = convert(input[count]);
            }
        }
        int result = divide(input, max);

        if(result == 0)
        {
            printf("such number is impossible!\n");
        }
        else
        {
            printf("%d\n", ++result);
        }
    }
}
