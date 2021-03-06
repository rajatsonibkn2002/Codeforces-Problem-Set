//Problem Link: https://codeforces.com/problemset/problem/746/A
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
    
    int a, b, c, max=0;
    cin>>a>>b>>c;
    FOR(i, 1, a+1){
        if(2*i<=b && 4*i<=c){
            if(7*i>max)
                max=7*i;
        }
        else{
            cout<<max;
            exit(0);
        }
    }
    cout<<max;
}
