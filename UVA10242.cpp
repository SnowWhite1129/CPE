#include<stdio.h>
struct Point
{
    double x,y;
};
void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}
void swap(Point &p1, Point &p2)
{
    Point temp;
    temp.x = p1.x;
    temp.y = p1.y;
    p1.x = p2.x;
    p1.y = p2.y;
    p2.x = temp.x;
    p2.y = temp.y;
}
bool cmp(Point p1, Point p2)
{
    return (p1.x == p2.x && p1.y == p2.y);
}
int main()
{
    Point p[4];
    while(1)
    {
        for(int i=0; i<4 ; i++)
        {
            if(scanf("%lf%lf",&p[i].x,&p[i].y)==EOF)
            {
                return 0;
            }
        }
        if(cmp(p[0],p[2]))
        {
            swap(p[0],p[1]);
        }
        else if(cmp(p[0],p[3]))
        {
            swap(p[0],p[1]);
            swap(p[2],p[3]);
        }
        else if(cmp(p[1],p[3]))
        {
            swap(p[2],p[3]);
        }
        printf("%.3f %.3f\n", p[0].x+p[3].x-p[1].x, p[0].y+p[3].y-p[1].y);
    }
}
