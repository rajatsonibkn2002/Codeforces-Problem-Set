//Problem Link: https://codeforces.com/problemset/problem/599/A
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

    int d1, d2, d3;
    cin>>d1>>d2>>d3;
    cout<<min(min(min(d1+d2+d3, 2*d1+2*d2), 2*d2+2*d3), 2*d1+2*d3);
}





