#include<iostream>
#include<stdio.h>
#include<vector>
#include<numeric>
#include<algorithm>
double avg;
using namespace std;
bool overavg(int n)
{
    return (double)n > avg;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n;
        cin >> n;
        vector <double> arr;
        for(double i=0;i<n;++i)
        {
            double num;
            cin >> num;
            arr.push_back(num);
        }
        avg = accumulate(arr.begin(),arr.end(),0) / n;
        double result = count_if(arr.begin(), arr.end(), overavg) / n * 100;
        printf("%.3f\%\n",result);
    }
}
