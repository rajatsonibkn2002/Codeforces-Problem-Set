//Problem Link: http://codeforces.com/problemset/problem/136/A
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

    int n;
    cin>>n;
    int a[n], b[n];
    FOR(i, 0, n){
        cin>>a[i];
        b[a[i]-1]=i+1;
    }
    FOR(i, 0, n){
        cout<<b[i]<<" ";
    }
}


