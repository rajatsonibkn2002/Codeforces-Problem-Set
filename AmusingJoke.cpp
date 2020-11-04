//Problem Link: https://codeforces.com/problemset/problem/141/A
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

    string a, b, c;
    cin>>a>>b>>c;
    int f[26]={0}, s[26]={0};
    FOR(i, 0, a.length()){
    	f[int(a[i])-65]++;
    }
    FOR(i, 0, b.length()){
    	f[int(b[i])-65]++;
    }
    FOR(i, 0, c.length()){
    	s[int(c[i])-65]++;
    }
    FOR(i, 0, 26){
    	if(f[i]!=s[i]){
    		cout<<"NO";
    		exit(0);
    	}
    }
    cout<<"YES";
}


