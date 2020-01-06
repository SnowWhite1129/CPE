#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;++i)
    {
        int n;
        cin >> n;
        vector <int> arr;
        for(int j=0;j<n;j++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        cout << "Case " << i << ": " << *max_element(arr.begin(), arr.end()) << endl;
    }
}
