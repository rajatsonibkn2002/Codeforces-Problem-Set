//Problem Link: http://codeforces.com/problemset/problem/1311/A
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

    long long int t, a, b;
    cin>>t;
    FOR(i, 0, t){
    	cin>>a>>b;
    	if(a==b)
    		cout<<0<<endl;
    	else if(a>b){
    		if((a-b)%2==0)
    			cout<<1<<endl;
    		else
    			cout<<2<<endl;
    	}
    	else{
    		if((b-a)%2==0)
    			cout<<2<<endl;
    		else
    			cout<<1<<endl;
    	}
    }
}


