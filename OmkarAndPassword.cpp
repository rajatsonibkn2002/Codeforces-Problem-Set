//Problem Link: https://codeforces.com/problemset/problem/1392/A
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

  	long long int t, n, count;
  	cin>>t;
  	FOR(i, 0, t){
  		count=0;
  		cin>>n;
  		int a[n];
  		cin>>a[0];
  		FOR(j, 1, n){
  			cin>>a[j];
  			if(a[j]==a[j-1])
  				count++;
  			else
  				count=0;
  		}
  		count++;
  		if(count==n)
  			cout<<n<<endl;
  		else
  			cout<<1<<endl;
  	}
}
