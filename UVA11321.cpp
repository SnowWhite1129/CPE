#include<stdio.h>
#include<utility>
#include<algorithm>
#include<math.h>
using namespace std;
bool cmp(pair <int, int> p1, pair <int, int> p2)
{
    if(p1.second != p2.second)
    {
        return p1.second < p2.second;
    }
    else
    {
        if(p1.first%2==0 && abs(p2.first%2)==1)
        {
            return false;
        }
        else if(abs(p1.first%2)==1 && p2.first%2==0)
        {
            return true;
        }
        else if(p1.first%2==0 && p2.first%2==0)
        {
            return p1.first < p2.first;
        }
        else
        {
            return p1.first > p2.first;
        }
    }
}
int main()
{
    int n,m;
    pair <int, int> num[10000];
    scanf("%d%d", &n, &m);
    while(n!=0 || m!=0)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", &num[i].first);
            num[i].second = num[i].first % m;
        }
        sort(num, num+n, cmp);
        printf("%d %d\n", n, m);
        for(int i=0;i<n;i++)
        {
            printf("%d\n", num[i].first);
        }
        scanf("%d%d", &n, &m);
    }
    printf("0 0\n");
}
