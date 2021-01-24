//Problem Link: https://codeforces.com/problemset/problem/38/A
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)
#include <vector>

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
            
    int n, sum=0;
    cin>>n;
    int d[n], a, b;
    FOR(i, 0, n-1)
        cin>>d[i];
    cin>>a>>b;
    for(int i=a; i<b; i++)
        sum+=d[i-1];
    cout<<sum;
}
