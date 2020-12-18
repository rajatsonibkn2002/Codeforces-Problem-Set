//Problem Link: https://codeforces.com/problemset/problem/1284/A
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

    long long int n, m, q, qn, c;
    cin>>n>>m;
    string s[n], t[m];
    FOR(i, 0, n)
    	cin>>s[i];
    FOR(i, 0, m)
    	cin>>t[i];
    cin>>q;
    FOR(i, 0, q){
    	cin>>qn;
    	c=qn%n;
    	if(c==0)
    		cout<<s[n-1];
    	else
    		cout<<s[c-1];
    	c=qn%m;
    	if(c==0)
    		cout<<t[m-1];
    	else
    		cout<<t[c-1];
    	cout<<endl;
    }
}
