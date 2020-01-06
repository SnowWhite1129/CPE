#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<cstring>
int main()
{
    char a[1001], b[1001];
    int alpha[26] = {0};
    while(gets(a)!=nullptr && gets(b)!=nullptr)
    {
        for(int i=0; i < strlen(a); i++)
        {
            for(int j=0; j < strlen(b); j++)
            {
                if(a[i]==b[j]&&isalpha(a[i]))
                {
                    alpha[a[i]-'a']++;
                    a[i] = ' ';
                    b[j] = ' ';
                    break;
                }
            }
        }
        for(int i=0; i<26; i++)
        {
            while(alpha[i]!=0)
            {
                printf("%c",(char)('a'+i));
                alpha[i]--;
            }
        }
        printf("\n");
        for(int i=0; i<26; i++)
        {
            alpha[i]=0;
        }
    }
}
