//Problem Link: https://codeforces.com/problemset/problem/994/A
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
    
    
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    FOR(i, 0, n)
        cin>>a[i];
    FOR(i, 0, m)
        cin>>b[i];
    FOR(i, 0, n){
        FOR(j, 0, m){
            if(a[i]==b[j])
                cout<<a[i]<<" ";
        }
    }
}       
