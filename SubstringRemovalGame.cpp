//Problem Link: https://codeforces.com/problemset/problem/1398/B
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

    int t;
    string s;
    cin>>t;
    FOR(i, 0, t){
    	cin>>s;
    	int count=0;
    	multiset <int, greater <int> > a;
    	multiset<int>::iterator it;
    	FOR(j, 0, s.length()){
    		if(s[j]=='0' && count>0){
    			a.insert(count);
    			count=0;
    		}
    		else if(s[j]=='1')
    			count++;
    	}
    	a.insert(count);
    	count=0;
    	it=a.begin();
    	for(int j=0; j<a.size(); j=j+2){
    		count=count+ *it;
    		++(++it);
    	}
    	cout<<count<<endl;
    }
    	
}





