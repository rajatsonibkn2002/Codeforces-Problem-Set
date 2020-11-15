//Problem Link: http://codeforces.com/problemset/problem/1294/A
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

    int t, a, b, c, n, maxx;
    cin>>t;
    FOR(i, 0, t){
    	cin>>a>>b>>c>>n;
    	maxx=max(max(a, b), c);
    	if((n-(maxx-a)-(maxx-b)-(maxx-c))%3==0&&(n-(maxx-a)-(maxx-b)-(maxx-c))>=0)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
}


