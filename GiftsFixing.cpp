//Problem Link: http://codeforces.com/problemset/problem/1399/B
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

    long long int t, n,an, am, bm, count;
    cin>>t;
    FOR(i, 0, t){
    	count=0;
    	vector <long long int> a, b;
    	cin>>n>>am;
    	a.push_back(am);
    	FOR(j, 0, n-1){
    		cin>>an;
    		if(an<am)
    			am=an;
    		a.push_back(an);
    	}
    	cin>>bm;
    	b.push_back(bm);
    	FOR(j, 0, n-1){
    		cin>>an;
    		if(an<bm)
    			bm=an;
    		b.push_back(an);
    	}
    	FOR(j, 0, n){
    		count=count+max((a[j]-am), (b[j]-bm));
    	}
    	cout<<count<<endl;
    }
}


