//Problem Link: http://codeforces.com/problemset/problem/1385/B
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

    int t, n, an;
    cin>>t;
    FOR(i, 0, t){
    	vector <int> a, out;
    	std::vector<int>::iterator it;
    	
    	
    	cin>>n;
    	FOR(j, 0, 2*n){
    		cin>>an;
    		a.push_back(an);
    		it = std::find(out.begin(), out.end(), an);
    		if(it==out.end())
    			out.push_back(an);
    	}
    	FOR(j, 0, n){
    		cout<<out[j]<<" ";
    	}
    	cout<<endl;
    }
}


