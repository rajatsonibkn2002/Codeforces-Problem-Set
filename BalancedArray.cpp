//Problem Link: http://codeforces.com/problemset/problem/1343/B
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

    int t, n, sum, e, se;
    cin>>t;
    FOR(i, 0, t){
    	sum=0;
    	se=0;
    	e=2;
    	cin>>n;
    	if((n/2)%2!=0)
    		cout<<"NO"<<endl;
    	else{
    		cout<<"YES"<<endl;
    		FOR(j, 0, n/2){
    			cout<<e<<" ";
    			se=se+e;
    			e=e+2;
    		}
    		e=1;
    		FOR(j, n/2, n-1){
    			cout<<e<<" ";
    			sum=sum+e;
    			e=e+2;
    		}
    		cout<<se-sum<<endl;
    	}
    }

    
}


