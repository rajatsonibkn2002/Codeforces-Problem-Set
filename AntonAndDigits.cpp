//Problem Link: https://codeforces.com/problemset/problem/734/B
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

    int k2, k3, k5, k6, out;
    cin>>k2>>k3>>k5>>k6;

    out = min(min(k2, k5), k6);
    k2 = k2-out;
    cout<<out*256 + (min(k2, k3)*32);
    
}





