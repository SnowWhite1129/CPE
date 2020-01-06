#include<stdio.h>
int clockwise(int start, int end, bool direction)
{
    if(direction == true)
    {
        if(end>start)
        {
            return (end-start)*9;
        }
        else
        {
            return 360-(start-end)*9;
        }
    }
    else
    {
        if(end>start)
        {
            return 360-(end-start)*9;
        }
        else
        {
            return (start-end)*9;
        }
    }
}
int main()
{
    int start, a, b, c;
    scanf("%d%d%d%d", &start, &a, &b, &c);
    while(start!=0 || a!=0 || b!=0 || c!=0)
    {
        int angle=1080;
        angle += clockwise(start, a, false);
        angle += clockwise(a, b, true);
        angle += clockwise(b, c, false);
        printf("%d\n", angle);
        scanf("%d%d%d%d", &start, &a, &b, &c);
    }

}
