//Problem Link: https://codeforces.com/problemset/problem/1091/A
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

    int y, b, r, a=0, x=0, z=0;
    cin>>y>>b>>r;
    if(b>=r-1 && y>=r-2)
        a = r+r-1+r-2;
    if(r>=b+1 && y>=b-1)
        x = b+b+1+b-1;
    if(r>=y+2 && b>=y+1)
        z = y+y+1+y+2;
    cout<<max(max(a, x), z);
}
