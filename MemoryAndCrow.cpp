//Problem Link: https://codeforces.com/problemset/problem/712/A
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

    int n;
    cin>>n;
    int a[n];
    FOR(i, 0, n)
        cin>>a[i];
    FOR(i, 0, n-1)
        cout<<a[i]+a[i+1]<<" ";
    cout<<a[n-1];
    


}
