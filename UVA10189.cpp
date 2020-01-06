#include<stdio.h>

int main()
{
    int n,m,t=1;
    scanf("%d%d",&n,&m);
    bool start = false;
    while(n!=0 || m!=0)
    {
        int board[100][100]= {0};
        if(start == true)
        {
            printf("\n");
        }
        for(int i=0; i<n; i++)
        {
            char c;
            scanf("%c",&c);
            for(int j=0; j<m; j++)
            {
                scanf("%c",&c);
                if(c=='*')
                {
                    board[i][j] = -1;
                    for(int k=i-1; k<=i+1; k++)
                    {
                        for(int l=j-1; l<=j+1; l++)
                        {
                            if(k>=0 && k<n && l>=0 &&l<m)
                            {
                                if(board[k][l]!=-1)
                                {
                                    board[k][l]++;
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("Field #%d:\n", t);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==-1)
                {
                    printf("*");
                }
                else
                {
                    printf("%d",board[i][j]);
                }
            }
            printf("\n");
        }
        scanf("%d%d",&n,&m);
        start = true;
        t++;
    }
}
