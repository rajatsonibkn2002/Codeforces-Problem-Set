//Problem Link: https://codeforces.com/problemset/problem/1041/A
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

  	long long int n;
 	cin>>n;
 	long long int a[n];
  	FOR(i, 0, n){
  		cin>>a[i];
  	}
  	sort(a, a+n);
  	cout<<abs((a[n-1]-a[0]+1)-n);	
}
