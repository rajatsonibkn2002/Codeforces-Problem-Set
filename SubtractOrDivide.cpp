//Problem Link: https://codeforces.com/problemset/problem/1451/A
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



int sord(int n){
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else if(n%2==0)
		return 2;
	else
		return 1+sord(n-1);
}

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
  		cout<<sord(n)<<endl;
  	}
}
