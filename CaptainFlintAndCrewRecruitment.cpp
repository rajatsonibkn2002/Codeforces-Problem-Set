//Problem Link: https://codeforces.com/problemset/problem/1388/A
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

    int t, n;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n;
    	if(n<=30)
    		cout<<"NO"<<endl;
    	else{
    		cout<<"YES"<<endl;
    		if(n==36)
    			cout<<5<<" "<<6<<" "<<10<<" "<<15<<endl;
    		else if(n==40)
    			cout<<6<<" "<<15<<" "<<10<<" "<<9<<endl;
    		else if(n==44)
    			cout<<6<<" "<<7<<" "<<10<<" "<<21<<endl;
    		else
    			cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;

    	}
    }
}





