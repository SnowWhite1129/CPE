#include<stdio.h>
int main()
{
    bool meet = false;
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if(c=='\"'&& meet==false)
        {
            printf("``");
            meet = true;
        }
        else if(c=='\"'&& meet==true)
        {
            printf("\''");
            meet = false;
        }
        else
        {
            printf("%c", c);
        }
    }
}
