//Problem Link: https://codeforces.com/problemset/problem/540/A
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

	    int n, sum=0;
	    cin>>n;
	    string s, ss;
	    cin>>s>>ss;
	    FOR(i, 0, n){
	    	sum=sum+min(abs(s[i]-ss[i]), (9-max(s[i], ss[i])+min(s[i], ss[i])+1));
	    }
	    cout<<sum;
	}





