//Problem Link: https://codeforces.com/problemset/problem/978/B
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
 
    int n, out=0, c=0;
    string s;
    cin>>n>>s;
    FOR(i, 0, n){
    	if(s[i]==120){
    		c++;
    	}
    	else{
    		if(c>=3)
    			out=out+(c-2);
    		c=0;
    	}
    }
    if(s[n-1]==120 && c>=3)
    	out=out+(c-2);
    cout<<out;
}
