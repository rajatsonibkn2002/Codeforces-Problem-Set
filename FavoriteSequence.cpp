//Problem Link: https://codeforces.com/problemset/problem/1462/A
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
  		long long int a[n];
  		for(int j=0; j<n; j++){
  			cin>>a[j];
  		}
  		for(int j=1; j<=n/2; j++)
  			cout<<a[j-1]<<" "<<a[n-j]<<" ";
  		if(n%2!=0)
  			cout<<a[n/2];
  		cout<<endl;
  	}
}
