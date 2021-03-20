//Problem Link: https://codeforces.com/problemset/problem/796/A
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

#define FOR(i,a,b)  for(long long i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n, m, k, min=200000;
    cin>>n>>m>>k;
    int a[n];
    FOR(i, 0, n)
        cin>>a[i];
    m--;
    FOR(i, 0, n){
        if(i!=m && a[i]!=0 && a[i]<=k){
            if(min>abs(i-m)*10)
                min=abs(i-m)*10;
        }
    }
    cout<<min;
}
