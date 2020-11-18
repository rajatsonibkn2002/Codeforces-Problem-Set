//Problem Link: https://codeforces.com/problemset/problem/1325/B
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

    long long int n, t, an;
    cin>>t;
    FOR(i, 0, t){
    	set<long long int> s1;
    	cin>>n;
    	FOR(j, 0, n){
    		cin>>an;
    		s1.insert(an);
    	}
    	cout<<s1.size()<<endl;
    }
}





