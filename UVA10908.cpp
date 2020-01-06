#include<stdio.h>
#include<stdlib.h>
int square(int** board, int m, int n, int r, int c)
{
    int result = board[r][c];
    int count=1;
    for(int z=1; z < m && z < n; z++, count+=2)
    {
        for(int i=r-z;i<=r+z;i++)
        {
            for(int j=c-z;j<=c+z;j++)
            {
                if(i<0 || j<0 || i>=m || j>=n)
                {
                    return count;
                }
                if(board[i][j]!=result)
                {
                    return count;
                }
            }
        }
    }
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char c;
        int m,n,q;
        scanf("%d%d%d",&m,&n,&q);
        int** board = (int**) malloc(sizeof(int*)*m);
        for(int j=0;j<m;j++)
        {
            board[j] = (int*) malloc(sizeof(int)*n);
        }
        for(int k=0;k<m;k++)
        {
            scanf("%c",&c); //null
            for(int l=0;l<n;l++)
            {
                scanf("%c",&c);
                board[k][l] = c - 'a';
            }
        }
        printf("%d %d %d\n",m, n, q);
        for(int j=0;j<q;j++)
        {
            int r,c;
            scanf("%d%d",&r,&c);
            printf("%d\n",square(board,m,n,r,c));
        }
        for(int j=0;j<m;j++)
        {
            free(board[j]);
        }
        free(board);
    }
}
