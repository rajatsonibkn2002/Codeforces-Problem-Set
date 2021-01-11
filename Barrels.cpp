//Problem Link: https://codeforces.com/problemset/problem/1430/B
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

    int t, n, k;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>k;
        int a[n];
        FOR(j, 0, n)
            cin>>a[j];
        sort(a, a+n);
        int j=n-2;
        while(k>0 &&j>=0){
            a[n-1]=a[j]+a[n-1];
            a[j]=0;
            j--;
            k--;
        }
        cout<<a[n-1]-0<<endl;;
    }
}
