//Problem Link: http://codeforces.com/problemset/problem/467/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)  for(int i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

   int n, p, q, out=0;
   cin>>n;
   FOR(i, 0, n){
        cin>>p>>q;
        if(q-p>=2)
            out++;
   }
   cout<<out;
}


