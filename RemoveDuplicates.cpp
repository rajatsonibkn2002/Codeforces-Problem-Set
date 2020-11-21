//Problem Link: https://codeforces.com/problemset/problem/978/A
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
 
    int n, an;
    cin>>n;
    vector <int> a, b;
    FOR(i, 0, n){
    	cin>>an;
    	a.push_back(an);
    	b.push_back(an);
    }
    
    sort(b.begin(), b.end());
    FOR(i, 1, n){
    	if(b[i-1]==b[i]){
			for (auto it = a.begin(); it != a.end(); ++it){
        		if(*it==b[i]){
    				a.erase(it);
    				break;
    			}
			}
    	}
    }
    cout<<a.size()<<endl;
    for (auto it = a.begin(); it != a.end(); ++it)
        cout << *it<<" ";
}
