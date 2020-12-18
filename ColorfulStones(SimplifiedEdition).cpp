//Problem Link: https://codeforces.com/problemset/problem/265/A
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
#define FOR(i,a,b)  for(i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    string a, b;
    int aa=0, bb=0;
    cin>>a>>b;
    FOR(bb, 0, b.length()){
    	if(a[aa]==b[bb])
    		aa++;
    }
    cout<<aa+1;
}
