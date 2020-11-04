//Problem Link: https://codeforces.com/problemset/problem/520/A
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

    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> se;
    if(n<26){
    	cout<<"NO";
    }
    else{
    	FOR(i, 0, s.length()){
    		se.insert(tolower(s[i]));
    	}
    	if(se.size()==26)
    		cout<<"YES";
    	else
    		cout<<"NO";
    }
}


