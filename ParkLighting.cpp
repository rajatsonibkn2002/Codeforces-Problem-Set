//Problem Link: http://codeforces.com/problemset/problem/1358/A
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

    int t, m, n;
    cin>>t;
    FOR(i, 0, t){
    	cin>>m>>n;
    	if((m*n)%2==0)
    		cout<<(m*n)/2<<endl;
    	else
    		cout<<((m*n)+1)/2<<endl;
    }
}


