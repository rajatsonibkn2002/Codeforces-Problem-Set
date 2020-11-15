//Problem Link: http://codeforces.com/problemset/problem/1370/A
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

    int t, n;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n;
    	if(n%2==0)
    		cout<<n/2<<endl;
    	else
    		cout<<(n-1)/2<<endl;
    }
}


