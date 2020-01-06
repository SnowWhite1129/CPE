#include<stdio.h>
int main()
{
    int n,m,d;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d%d",&m,&d);

        for(int j=2; j<=m; j++)
        {
            if(j==3)
            {
                d+=28;
            }
            else if(j<=8)
            {
                if(j%2==0)
                {
                    d+=31;
                }
                else
                {
                    d+=30;
                }
            }
            else
            {
                if(j%2==0)
                {
                    d+=30;
                }
                else
                {
                    d+=31;
                }
            }
        }
        if(d<3)
        {
            d+=7;
        }
        switch ((d-3)%7)
        {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;
        }
    }
}
