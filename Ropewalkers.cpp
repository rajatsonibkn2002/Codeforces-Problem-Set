//Problem Link: https://codeforces.com/problemset/problem/1185/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
// typedef long l;
// typedef long long ll;
typedef vector<int> vi;
// typedef vector<char> vc;
typedef std::vector<int>::iterator Auto;
// #define PB push_back
#define FOR(i,a,b)  for(long long int i=a;i<b;i++)
#include <vector>

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
            
    long long int a[3], d, count=0;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a, a+3);
    if(a[2]-a[1]<d)
        count=count+(d-(a[2]-a[1]));
    if(a[1]-a[0]<d)
        count=count+(d-(a[1]-a[0]));
    cout<<count;
}
