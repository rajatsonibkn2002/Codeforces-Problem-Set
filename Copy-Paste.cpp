//Problem Link: https://codeforces.com/problemset/problem/1417/A
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

    int t, n, k;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>k;
        int a[n];
        FOR(j, 0, n)
            cin>>a[j];
        sort(a, a+n);
        int min = a[0];
        int count=0;    
        FOR(j, 1, n){
            while(a[j]+min<=k){
                a[j]+=min;
                count++;
            }
        }
        cout<<count<<endl;
    }


}
