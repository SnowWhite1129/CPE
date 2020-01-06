#include<stdio.h>
#include<string>
#include<math.h>
#include<iostream>
const double pi = acos(-1);
using namespace std;
int main()
{
    double s,a;
    string unit;
    while(scanf("%lf%lf",&s,&a)!=EOF)
    {
        cin >> unit;
        if(unit == "min")
        {
            a /= 60.0;
        }
        if(a>180)
        {
            a = 360 - a;
        }
        double arc = (double)(2*pi*(s+6440)*a)/360.0;
        double chord = sqrt(2*(s+6440)*(s+6440)*(1-cos(a*pi/180.0)));
        printf("%.6f %.6f\n", arc, chord);
    }
}
