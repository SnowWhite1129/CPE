#include<stdio.h>
#include<vector>
using namespace std;
void divide(long long int n,long long int m)
{
    if(m==0 || m==1 || m > n)
    {
        printf("Boring!\n");
        return;
    }
    vector <long long int> answer;
    while(n>1 && n%m ==0)
    {
        answer.push_back(n);
        n/=m;
    }
    if(n==1)
    {
        answer.push_back(1);
        for(int i=0;i<answer.size();i++)
        {
            printf("%lld",answer.at(i));
            if(i<answer.size()-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    else
    {
        printf("Boring!\n");
    }
    answer.clear();
}
int main()
{
    long long int m,n;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
        divide(m,n);
    }
}
