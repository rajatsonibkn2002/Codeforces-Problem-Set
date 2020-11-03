//Problem Link: https://codeforces.com/problemset/problem/443/A
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

    set<char> s;
	char a;
	while(cin>>a) {
    	s.insert(a);
	}
	if(s.size()<=3)
		cout<<s.size()-2;
	else
		cout<<s.size()-3;
}


