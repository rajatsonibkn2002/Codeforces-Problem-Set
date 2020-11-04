//Problem Link: https://codeforces.com/problemset/problem/996/A
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int n, output=0;
    cin>>n;
    output=output+(n/100);
    n=n%100;
    output=output+(n/20);
    n=n%20;
    output=output+(n/10);
    n=n%10;
    output=output+(n/5);
    n=n%5;
    output=output+(n/1);
    n=n%1;
    cout<<output;
}


