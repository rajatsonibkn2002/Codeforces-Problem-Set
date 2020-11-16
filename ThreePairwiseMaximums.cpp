//Problem Link: http://codeforces.com/problemset/problem/1385/A
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

    long long int t, x, y, z;
    cin>>t;
    FOR(i, 0, t){
    	cin>>x>>y>>z;
    	if((x==y&&x>=z) || (y==z&&y>=x) || (z==x&&z>=y)){
    		cout<<"YES"<<endl;
    		cout<<max(max(x, y), z)<<" "<<min(min(x, y), z)<<" "<<min(min(x, y), z)<<endl;
    	}
    	else
    		cout<<"NO"<<endl;
    }
}


