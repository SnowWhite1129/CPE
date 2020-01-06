#include<stdio.h>
#include<ctype.h>
int main()
{
    int n, alpha[26]={0};
    char c;
    scanf("%d", &n);
    scanf("%c", &c);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&c);
        while(c!='\n')
        {
            c = tolower(c);
            if(isalpha(c))
            {
                alpha[c-'a']++;
            }
            scanf("%c",&c);
        }
    }
    for(int i=0;i<26;i++)
    {
        int max=0,index=0;
        for(int j=0;j<26;j++)
        {
            if(alpha[j]>max)
            {
                max = alpha[j];
                index = j;
            }
        }
        if(max==0)
        {
            break;
        }
        else
        {
            printf("%c %d\n", index + 'A', max);
        }
        alpha[index] = 0;
    }
}
