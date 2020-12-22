//Problem Link: https://codeforces.com/problemset/problem/1301/A
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

    int t, cc;
    string a, b, c;
    cin>>t;
    FOR(i, 0, t){
    	cc=0;
    	cin>>a>>b>>c;
    	FOR(j, 0, a.length()){
    		if(a[j]!=c[j]&&b[j]!=c[j]){
    			cc=1;
    		}
    	}
    	if(cc==1)
    		cout<<"NO"<<endl;
    	else
    		cout<<"YES"<<endl;
    }
}
