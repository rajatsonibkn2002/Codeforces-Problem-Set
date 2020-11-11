//Problem Link: http://codeforces.com/problemset/problem/1353/B
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

    int t, n, k, av, sum;
    cin>>t;
    FOR(i, 0, t){
    	vector <int> a, b;
    	sum=0;
    	cin>>n>>k;
    	FOR(i, 0, n){
    		cin>>av;
    		a.push_back(av);
    	}
    	FOR(i, 0, n){
    		cin>>av;
    		b.push_back(av);
    	}
    	sort(a.begin(), a.end());
    	sort(b.begin(), b.end());
    	FOR(i, 0, k){
    		if(a[i]<b[n-i-1])
    			a[i]=b[n-i-1];
    	}
    	FOR(i, 0, n){
    		sum=sum+a[i];
    	}
    	cout<<sum<<endl;
    }
}


