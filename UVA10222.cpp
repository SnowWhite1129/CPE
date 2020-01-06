#include<stdio.h>
#include<ctype.h>
int main()
{
    char code[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./";
    char input[16384];
    gets(input);
    for(int i=0;input[i]!='\0';i++)
    {
        char c = input[i];
        if(c!=' ')
        {
            c = tolower(c);
            for(int j=0;code[j]!='\0';j++)
            {
                if(c == code[j])
                {
                    c = code[j-2];
                    break;
                }
            }
        }
        printf("%c", c);
    }
    printf("\n");
}
