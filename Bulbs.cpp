//Problem Link: https://codeforces.com/problemset/problem/615/A
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


long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
        
    int n, m, x, an;
    cin>>n>>m;
    int a[m]={0};
    FOR(i, 0, n){
        cin>>x;
        FOR(j, 0, x){
            cin>>an;
            a[an-1]++;
        }
    }
    FOR(i, 0, m){
        if(a[i]==0){
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
}
