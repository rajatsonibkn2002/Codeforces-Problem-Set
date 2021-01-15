//Problem Link: https://codeforces.com/problemset/problem/1017/A
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
    
    int n, a, sum, sum1=0;
    cin>>n;
    vector<pair<int, int>> v;
    FOR(i, 0, n){
        sum=0;
        FOR(j, 0, 4){
            cin>>a;
            if(i==0)
                sum1=sum1+a;
            sum=sum+a;
        }
        v.push_back(make_pair(sum, i));
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    sum=0;
    for(auto &it:v){
        sum++;
        if(it.first==sum1){
            cout<<sum;
            exit(0);
        }
    }
}
