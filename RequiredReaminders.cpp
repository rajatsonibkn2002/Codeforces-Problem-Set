//Problem Link: http://codeforces.com/problemset/problem/1374/A
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

    long long int t, x, y, n, k;
    cin>>t;
    FOR(i, 0, t){
    	cin>>x>>y>>n;
    	if(n%x<y){
    		if((x-(y-n%x))<=n)
    			cout<<n-(x-(y-n%x))<<endl;
    		else
    			cout<<0<<endl;
    	}
    	else if(n%x==y)
    		cout<<n<<endl;
    	else{
    		if((n%x-y)<=n)
    			cout<<(n-(n%x-y))<<endl;
    		else
    			cout<<0<<endl;
    	}
    }
}


