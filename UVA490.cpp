#include<stdio.h>
#include<cstring>
int main()
{
    char input[100][101];
    int count,max=0;
    for(count=0; gets(input[count])!=nullptr; count++)
    {
        if(strlen(input[count])>max)
        {
            max = strlen(input[count]);
        }
    }
    for(int i=0; i<max; i++)
    {
        for(int j=count-1; j>=0; j--)
        {
            if(i>=strlen(input[j]))
            {
                printf(" ");
            }
            else
            {
                printf("%c",input[j][i]);
            }
        }
        printf("\n");
    }
}
