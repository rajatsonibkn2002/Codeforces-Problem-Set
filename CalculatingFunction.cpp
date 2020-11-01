//Problem Link: http://codeforces.com/problemset/problem/486/A
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


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    long long int n, ans=0;
    cin>>n;
    if(n%2==0)
        ans=n/2;
    else
        ans = (n-1)/2 -n;
    cout<<ans;
}


