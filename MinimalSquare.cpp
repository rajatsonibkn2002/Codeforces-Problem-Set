//Problem Link: http://codeforces.com/problemset/problem/1360/A
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

    int t, a, b;
    cin>>t;
    FOR(i, 0, t){
    	cin>>a>>b;
    	if(min(a, b)*2<max(a, b))
    		cout<<max(a, b)*max(a, b)<<endl;
    	else
    		cout<<min(a, b)*min(a, b)*4<<endl;
    }
}


