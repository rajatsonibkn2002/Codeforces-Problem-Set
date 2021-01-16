//Problem Link: https://codeforces.com/problemset/problem/1080/A
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
    
    long long int n, k, count=0;
    cin>>n>>k;
    if((2*n)%k==0)
        count=count+((2*n)/k);
    else
        count=count+((2*n)/k)+1;
    if((5*n)%k==0)
        count=count+((5*n)/k);
    else
        count=count+((5*n)/k)+1;
    if((8*n)%k==0)
        count=count+((8*n)/k);
    else
        count=count+((8*n)/k)+1;
    cout<<count;
}
