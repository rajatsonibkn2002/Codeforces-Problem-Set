//Problem Link: http://codeforces.com/problemset/problem/231/A
/*
  Author: Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    int n, p, v, t, count=0, test=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p>>v>>t;
        if(p==1)
            test++;
        if(v==1)
            test++;
        if(t==1)
            test++;
        if(test>=2)
            count++;
        test=0;
    }
    cout<<count;
}
