//Problem Link: https://codeforces.com/problemset/problem/950/A
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
    
    
    int l, r, a;
    cin>>l>>r>>a;
    cout<<min(l, r)*2 + min(max(l, r)-min(l, r), a)*2 + ((a-min(max(l, r)-min(l, r), a))/2)*2;

}       
