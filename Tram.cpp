//Problem Link: http://codeforces.com/problemset/problem/116/A
/*
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max=0,a, b, total=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        total = total-a+b;
        if(total>max)
            max = total;
    }
    cout<<max;
}
