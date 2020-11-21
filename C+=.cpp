//Problem Link: https://codeforces.com/problemset/problem/1368/A
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

    long long int t, a, b, n, c;
    cin>>t;
    FOR(i, 0, t){
    	cin>>a>>b>>n;
    	c=0;
    	while(max(a, b)<=n){
    		if(a==min(a, b))
    			a=a+b;
    		else
    			b=a+b;
    		c++;
    	}
    	cout<<c<<endl;
    }
}





