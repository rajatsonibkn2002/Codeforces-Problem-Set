//Problem Link: https://codeforces.com/problemset/problem/595/A
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
    
    int n, m, count=0;
    cin>>n>>m;
    int a[2*m];
    FOR(i, 0, n){
        FOR(j, 0, 2*m){
            cin>>a[j];
            if(j%2!=0 && (a[j]==1 || a[j-1]==1))
                count++;
        }
    }
    cout<<count;
}
