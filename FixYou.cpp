//Problem Link: https://codeforces.com/problemset/problem/1391/B
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

    int t, n, m, out;
    cin>>t;
    char c;
    FOR(tt, 0, t){
    	cin>>n>>m;
    	out=0;
    	FOR(i, 0, n){
    		FOR(j, 0, m){
    			cin>>c;
    			if(j==m-1 && c=='R')
    				out++;
    			else if(i==n-1 && c=='D')
    				out++;
    		}
    	}
    	cout<<out<<endl;
   	}
}
