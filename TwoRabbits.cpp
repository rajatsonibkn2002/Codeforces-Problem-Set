//Problem Link: https://codeforces.com/problemset/problem/1304/A
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

    long long int t, x, y, a, b;
    cin>>t;
    FOR(i, 0, t){
    	cin>>x>>y>>a>>b;
    	if((y-x)%(a+b)==0)
    		cout<<(y-x)/(a+b)<<endl;
    	else
    		cout<<-1<<endl;
    }
    	
}





