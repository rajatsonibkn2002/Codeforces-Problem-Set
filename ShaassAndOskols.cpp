//Problem Link: https://codeforces.com/problemset/problem/294/A
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


bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2;i<=sqrt(num);i++){
        if(num % i == 0) return false;
    }
    return true;
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
    
    int n, m, x, y;
    cin>>n;
    int a[n];
    FOR(i, 0, n)
        cin>>a[i];
    cin>>m;
    FOR(i, 0, m){
        cin>>x>>y;
        x=x-1;
        if(x==0){
            if(x+1<n)
                a[x+1]=a[x+1]+a[x]-y;
            a[x]=0;
        }
        else if(x==n-1){
            if(x-1>0)
                a[x-1]=a[x-1]+y-1;
            a[x]=0;
        }
        else{
            a[x-1]=a[x-1]+y-1;
            a[x+1]=a[x+1]+a[x]-y;
            a[x]=0;
        }
    }
    FOR(i, 0, n)
        cout<<a[i]<<endl;
}
