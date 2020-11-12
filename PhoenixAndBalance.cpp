//Problem Link: http://codeforces.com/problemset/problem/1348/A
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

    int t, n, sum, s;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n;
    	s=0;
    	sum=2*(pow(2, n)-1);
    	FOR(j, n/2, n){
    		s=s+pow(2,j);
    	}
    	cout<<sum-(2*s)<<endl;
    }
}


