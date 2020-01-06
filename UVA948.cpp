#include<stdio.h>
#include<vector>
std::vector <int> f;
void init()
{
    f.push_back(1);
    f.push_back(1);
    for(int i=2;true;i++)
    {
        int num = f.at(i-1)+f.at(i-2);
        if(num>=100000000)
        {
            break;
        }
        f.push_back(num);
    }
}
void fib(int num)
{
    printf("%d = ",num);
    bool start = false;
    for(int i=f.size()-1;i>0;i--)
    {
        if(num>=f.at(i))
        {
            num -= f.at(i);
            start = true;
            printf("1");
        }
        else if(start==true)
        {
            printf("0");
        }
    }
    printf(" (fib)\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    init();
    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        fib(num);
    }
}
