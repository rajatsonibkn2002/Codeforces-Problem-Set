//Problem Link: http://codeforces.com/problemset/problem/1360/B
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
    	vector <int> a;
    	int min=1001;
    	cin>>n;
    	FOR(j, 0, n){
    		cin>>an;
    		a.push_back(an);
    	}
    	sort(a.begin(), a.end());
    	FOR(j, 0, n-1){
    		if(a[j+1]-a[j]<min)
    			min = a[j+1]-a[j];
    	}
    	cout<<min<<endl;
    }
}


