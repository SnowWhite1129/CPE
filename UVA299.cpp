#include<stdio.h>
int search(const int num[], int target, int n)
{
    for(int i=0;i<n;i++)
    {
        if(target==num[i])
        {
            return i;
        }
    }
    return -1;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m,num[50];
        scanf("%d",&m);
        for(int j=0;j<m;j++)
        {
            scanf("%d",&num[j]);
        }
        int sum=0;
        for(int j=0;j<m;j++)
        {
            int position = search(num, j+1, m);
            for(int k=position;k>j;k--)
            {
                swap(num[k],num[k-1]);
                sum++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",sum);
    }
}
