#include<stdio.h>
void Print(long long int n, int count)
{
    int num;
    switch (count%4)
    {
    case 0:
    case 2:
    case 3:
        num = n%100;
        n/=100;
        break;
    case 1:
        num = n%10;
        n/=10;
        break;
    default:
        printf("error");
        break;
    }
    if(n>0)
    {
        Print(n, count+1);
        switch (count%4)
        {
        case 0:
            if(n%10!=0)
            {
                //fprintf(f, " shata");
                printf(" shata");
            }
            break;
        case 1:
            if(n%100!=0)
            {
                //fprintf(f, " hajar");
                printf(" hajar");
            }
            break;
        case 2:
            if(n%100!=0)
            {
                //fprintf(f, " lakh");
                printf(" lakh");
            }
            break;
        case 3:
            //fprintf(f, " kuti");
            printf(" kuti");
            break;
        default:
            printf("error");
            break;
        }
    }
    if(num!=0 ||(count==0 && n==0))
    {
        //fprintf(f, " %d", num);
        printf(" %d", num);
    }
}
int main()
{
    //FILE *f = fopen("output.txt", "w");
    long long int n;
    for(int i=1; scanf("%lld", &n)!=EOF; i++)
    {
        //fprintf(f, "%4d.", i);
        printf("%4d.",i);
        Print(n, 0);
        printf("\n");
        //fprintf(f, "\n");
    }
    //fclose(f);
    return 0;
}
