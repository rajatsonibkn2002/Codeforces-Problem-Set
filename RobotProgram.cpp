//Problem Link: https://codeforces.com/problemset/problem/1452/A
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

    int t, x, y;
    cin>>t;
    FOR(i, 0, t){
    	cin>>x>>y;
    	if(x==y)
    		cout<<x+y<<endl;
    	else
    		cout<<max(x, y)+(max(x, y)-1)<<endl;
    }
}
