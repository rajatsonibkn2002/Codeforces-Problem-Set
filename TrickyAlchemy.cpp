//Problem Link: https://codeforces.com/problemset/problem/912/A
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

    long long int a, b, x, y, z, sum=0;
    cin>>a>>b>>x>>y>>z;
    if(2*x+y>a)
        sum+=(2*x+y)-a;
    if(3*z+y>b)
        sum+=(3*z+y)-b;
    cout<<sum;

}
