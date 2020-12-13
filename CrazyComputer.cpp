//Problem Link: https://codeforces.com/problemset/problem/716/A
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

  	long long int n, c, out=1;
  	cin>>n>>c;
  	int a[n];
  	cin>>a[0];
  	FOR(i, 1, n){
  		cin>>a[i];
  		if(a[i]-a[i-1]<=c)
  			out++;
  		else
  			out=1;
  	}
  	cout<<out;

}
