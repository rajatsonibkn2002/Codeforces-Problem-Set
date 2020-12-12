//Problem Link: https://codeforces.com/problemset/problem/1108/A
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

  	int q, l1, r1, l2, r2;
  	cin>>q;
  	FOR(i, 0, q){
  		cin>>l1>>r1>>l2>>r2;
  		if(l1==r2)
  			cout<<l1+1<<" "<<r2<<endl;
  		else
  			cout<<l1<<" "<<r2<<endl;
  	}
}
