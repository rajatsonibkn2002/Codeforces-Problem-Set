//Problem Link: https://codeforces.com/problemset/problem/1006/A
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

  	int n;
  	long long int an;
  	cin>>n;
  	FOR(i, 0, n){
  		cin>>an;
  		if(an%2==0)
  			cout<<an-1<<" ";
  		else
  			cout<<an<<" ";
  	}
}
