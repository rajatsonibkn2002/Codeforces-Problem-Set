//Problem Link: https://codeforces.com/problemset/problem/1454/B
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
 
    long long int t, n, an;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n;
    	vector<int> a, b;
    	FOR(j, 0, n){
    		cin>>an;
    		a.push_back(an);
    		b.push_back(an);
    	}
    	sort(a.begin(), a.end());
    	if(a[0]!=a[1])
    		an=a[0];
    	else
    		an=20000000;
    	FOR(j, 1, n-1){
    		if(a[j-1]!=a[j] && a[j+1]!=a[j] && a[j]<an)
    			an=a[j];
    	}
    	if(a[n-1]!=a[n-2]&&an>a[n-1])
    		an=a[n-1];
    	if(an==20000000)
    		cout<<-1<<endl;
    	else{
    		FOR(j, 0, n){
    			if(b[j]==an){
    				cout<<j+1<<endl;
    				break;
    			}
    		}
    	}
    }
    
}
