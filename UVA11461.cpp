#include<stdio.h>
#include<vector>
int main()
{
    int a,b;
    std::vector <int> square;
    for(int i=1;i<=1000;i++)
    {
        if(i*i>100000)
        {
            break;
        }
        else
        {
            square.push_back(i*i);
        }
    }
    scanf("%d%d",&a,&b);
    while(a!=0 || b!=0)
    {
        int num=0;
        for(int i=a;i<=b;i++)
        {
            for(int j=0;j<square.size();j++)
            {
                if(i == square.at(j))
                {
                    num++;
                    break;
                }
            }
        }
        printf("%d\n",num);
        scanf("%d%d",&a,&b);
    }
}
