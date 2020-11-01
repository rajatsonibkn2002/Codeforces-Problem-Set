//Problem Link: http://codeforces.com/problemset/problem/200/B
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

    int n, p;
    float s=0;
    cin>>n;
    FOR(i, 0, n){
        cin>>p;
        s=s+float(p);
    }
    cout<<s/n;
}


