//Problem Link: https://codeforces.com/problemset/problem/1382/A
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

    int t, n, m;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n>>m;
    	int a[n], b[m];
    	FOR(j, 0, n)
    		cin>>a[j];
    	FOR(j, 0, m)
    		cin>>b[j];
    	sort(a, a+n); 
   		sort(b, b+m);
   		vector<int> v(n + m); 
    	vector<int>::iterator it, st; 
    	it = set_intersection(a, a+n, 
                          b, b+m, 
                          v.begin());
    	if(*v.begin()==0)
    		cout<<"NO"<<endl;
    	else{
    		cout<<"YES"<<endl<<1<<" "<<*v.begin()<<endl;
    	}
    }
}





