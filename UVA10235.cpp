#include<stdio.h>
#include<vector>
using namespace std;
int convert(int n)
{
    vector <int> num;
    while(n>0)
    {
        num.push_back(n%10);
        n/=10;
    }
    int sum=0;
    for(int i=0;i<num.size();i++)
    {
        sum*=10;
        sum += num.at(i);
    }
    return sum;
}
bool prime(int n)
{
    if(n%2==0)
    {
        return false;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(prime(n)==true)
        {
            if(prime(convert(n))==true && n != convert(n))
            {
                printf("%d is emirp.\n",n);
            }
            else
            {
                printf("%d is prime.\n",n);
            }
        }
        else
        {
            printf("%d is not prime.\n",n);
        }
    }
}
