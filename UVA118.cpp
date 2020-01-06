#include<stdio.h>
#include<cstring>
int board[51][51] = {0};
bool action(char input, int &angle, int &x, int &y, int n, int m)
{
    switch (input)
    {
    case 'L':
        angle += 90;
        if(angle>=360)
        {
            angle -= 360;
        }
        break;
    case 'R':
        angle -= 90;
        if(angle<0)
        {
            angle+=360;
        }
        break;
    case 'F':
        if(angle == 0)
        {
            if(x+1>n)
            {
                if(board[x][y]!=1)
                {
                    board[x][y] = 1;
                    return false;
                }
            }
            else
            {
                x++;
            }
        }
        else if(angle == 90)
        {
            if(y+1>m)
            {
                if(board[x][y]!=1)
                {
                    board[x][y] = 1;
                    return false;
                }
            }
            else
            {
                y++;
            }
        }
        else if(angle == 180)
        {
            if(x-1<0)
            {
                if(board[x][y]!=1)
                {
                    board[x][y] = 1;
                    return false;
                }
            }
            else
            {
                x--;
            }
        }
        else if(angle == 270)
        {
            if(y-1<0)
            {
                if(board[x][y]!=1)
                {
                    board[x][y] = 1;
                    return false;
                }
            }
            else
            {
                y--;
            }
        }
        else
        {
            printf("Error angle\n");
            return false;
        }
        break;
    default:
        printf("Error input\n");
        return false;
    }
    return true;
}
int convertToAngle(char input)
{
    switch (input)
    {
    case 'N':
        return 90;
    case 'S':
        return 270;
    case 'E':
        return 0;
    case 'W':
        return 180;
    }
}
char convertToDirection(int angle)
{
    switch (angle)
    {
    case 0:
        return 'E';
    case 90:
        return 'N';
    case 180:
        return 'W';
    case 270:
        return 'S';
    default:
        return 'X';
    }
}
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);
    int x,y;
    while(scanf("%d%d", &x, &y)!=EOF)
    {
        getchar();
        char direction;
        scanf("%c", &direction);
        int angle = convertToAngle(direction);
        getchar();
        char instruction[101];
        gets(instruction);
        bool survived = true;
        for(int i=0; i<strlen(instruction); i++)
        {
            survived = action(instruction[i], angle, x, y, n, m);
            if(!survived)
            {
                printf("%d %d %c LOST\n", x, y, convertToDirection(angle));
                break;
            }
        }
        if(survived)
        {
            printf("%d %d %c\n", x, y, convertToDirection(angle));
        }
    }
}
