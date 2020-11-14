//Problem Link: http://codeforces.com/problemset/problem/1353/A
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

    int t, n, m;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n>>m;
    	if(n==1)
    		cout<<0<<endl;
    	else if(n==2)
    		cout<<m<<endl;
    	else
    		cout<<2*m<<endl;
    }
}


