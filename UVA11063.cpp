#include<stdio.h>
#include<algorithm>
#include<vector>
bool sequence(const int num[], int n)
{
    std::vector<int> sum;
    for(int i=0; i<n-1; i++)
    {
        if(num[i] >= num[i+1] || num[i] < 1)
        {
            return false;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(num[i] + num[j] > 0)
            {
                sum.push_back(num[i] + num[j]);
            }
        }
    }
    std::sort(sum.begin(), sum.end());
    for(int i=0; i<sum.size()-1; i++)
    {
        if(sum.at(i)==sum.at(i+1))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,num[100];
    for(int z=0; scanf("%d",&n)!=EOF; z++)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        if(sequence(num, n))
        {
            printf("Case #%d: It is a B2-Sequence.\n\n",z+1);
        }
        else
        {
            printf("Case #%d: It is not a B2-Sequence.\n\n",z+1);
        }
    }
    return 0;
}
