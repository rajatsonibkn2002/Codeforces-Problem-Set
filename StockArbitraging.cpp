//Problem Link: https://codeforces.com/problemset/problem/1150/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;

#define PB push_back
#define MP make_pair

#define FOR(i,a,b)  for(int i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n, m, r, price;
    cin>>n>>m>>r;
    int a[n], b[m];
    FOR(i, 0, n)
        cin>>a[i];
    FOR(i, 0, m)
        cin>>b[i];
    sort(a, a+n);
    sort(b, b+m);
    cout<<max(r, ((r-(r/a[0])*a[0])+((r/a[0])*b[m-1])));     
    


}
