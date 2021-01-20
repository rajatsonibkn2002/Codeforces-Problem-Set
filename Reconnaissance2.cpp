//Problem Link: https://codeforces.com/problemset/problem/34/A
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
        
    int n, an, min=1001, aa=0, b=1;
    cin>>n;
    int a[n];
    FOR(i, 0, n)
        cin>>a[i];
    FOR(i, 0, n){
        int j=i+1;
        if(j==n)
            j=0;
        if(abs(a[i]-a[j])<min){
            min=abs(a[i]-a[j]);
            aa=i+1;
            b=j+1;
        }
    }
    cout<<aa<<" "<<b;

}
