#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n>0)
    {
        getchar();
        int dice[3][3] = {0};
        dice[1][1] = 1;
        dice[0][1] = 2;
        dice[1][0] = 3;
        dice[2][1] = 5;
        dice[1][2] = 4;
        int down = 6;
        char direction[10];
        for(int i=0; i<n; i++)
        {
            gets(direction);
            if(strcmp(direction, "north")==0)
            {
                int temp = dice[0][1];
                for(int i=0; i<2; i++)
                {
                    dice[i][1] = dice[i+1][1];
                }
                dice[2][1] = down;
                down = temp;
            }
            else if(strcmp(direction, "south")==0)
            {
                int temp = dice[2][1];
                for(int i=2; i>0; i--)
                {
                    dice[i][1] = dice[i-1][1];
                }
                dice[0][1] = down;
                down = temp;
            }
            else if(strcmp(direction, "west")==0)
            {
                int temp = dice[1][0];
                for(int i=0; i<2; i++)
                {
                    dice[1][i] = dice[1][i+1];
                }
                dice[1][2] = down;
                down = temp;
            }
            else if(strcmp(direction, "east")==0)
            {
                int temp = dice[1][2];
                for(int i=2; i>0; i--)
                {
                    dice[1][i] = dice[1][i-1];
                }
                dice[1][0] = down;
                down = temp;
            }
            else
            {
                printf("Error.\n");
            }
        }
        printf("%d\n", dice[1][1]);
        scanf("%d",&n);
    }
}
