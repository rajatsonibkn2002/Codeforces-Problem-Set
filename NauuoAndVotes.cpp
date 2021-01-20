//Problem Link: https://codeforces.com/problemset/problem/1173/A
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
        
    int x, y, z;
    cin>>x>>y>>z;
    if(x+z>y && x>y+z)
        cout<<'+';
    else if(x+z==y && x==y+z)
        cout<<0;
    else if(x+z<y && x<y+z)
        cout<<'-';
    else
        cout<<'?';
}
