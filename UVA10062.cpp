#include<stdio.h>
#include<utility>
#include<algorithm>
bool cmp(std::pair<int,int> p1, std::pair<int,int> p2)
{
    if(p1.second == p2.second)
    {
        return p1.first > p2.first;
    }
    return p1.second < p2.second;
}
int main()
{
    char line[1001];
    bool start = false;
    while(gets(line)!=nullptr)
    {
        if(start==true)
        {
            printf("\n");
        }
        std::pair <int,int> frequency[128];
        for(int i=0;i<128;i++)
        {
            frequency[i].first = i;
            frequency[i].second = 0;
        }
        for(int i=0;line[i]!='\0';i++)
        {
            frequency[line[i]].second++;
        }
        std::sort(frequency, frequency+128, cmp);
        for(int i=0;i<128;i++)
        {
            if(frequency[i].second!=0)
            {
                printf("%d %d\n",frequency[i].first, frequency[i].second);
            }
        }
        start = true;
    }
}
