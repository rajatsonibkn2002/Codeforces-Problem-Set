//Problem Link: https://codeforces.com/problemset/problem/1397/A
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

    float t, n;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n;
    	string s, sa;
    	cin>>s;
    	FOR(j, 0, n-1){
    		cin>>sa;
    		s=s+sa;
    	}
    	sort(s.begin(), s.end());
    	char f=s[0];
    	float count=0, nn=1;
    	for(auto j=s.begin(); j!=s.end(); j++){
    		if(*j==f)
    			count++;
    		else{
    			if((count/n) - floor(count/n)!=0)
    				nn=0;
    			count=1;
    			f=*j;
    		}
    	}
    	if((count/n) - floor(count/n)!=0)
    		nn=0;
    	if(nn==1)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    
}





