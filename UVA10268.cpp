#include<stdio.h>
#include<vector>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int p,result=0;
        std::vector<int> a;
        while(scanf("%d",&p)&&(getchar()!='\n'))
        {
            a.push_back(p);
        }
        a.push_back(p);

        for(int i = a.size()-2, var = 1; i>=0; i--,var*=x)
        {
            result += var * a.at(i) * (a.size()-i-1);
        }
        printf("%d\n", result);
        a.clear();
    }
}
