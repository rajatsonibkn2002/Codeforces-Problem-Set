//Problem Link: http://codeforces.com/problemset/problem/758/A
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
#include <vector>



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int n, g, out=0;
    vector <int> a;
    cin>>n;
    FOR(i, 0, n){
    	cin>>g;
    	a.push_back(g);
    }
    sort(a.begin(), a.end());
    FOR(i, 0, n-1){
    	out=out+(a[n-1]-a[i]);
    }
    cout<<out;
}


