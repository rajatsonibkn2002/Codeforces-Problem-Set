//Problem Link: https://codeforces.com/problemset/problem/1230/A
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

  	int a[4];
  	cin>>a[0]>>a[1]>>a[2]>>a[3];
  	if(a[0]+a[1]==a[2]+a[3])
  		cout<<"YES";
  	else if(a[0]+a[2]==a[1]+a[3])
  		cout<<"YES";
  	else if(a[0]+a[3]==a[2]+a[1])
  		cout<<"YES";
  	else if(a[1]==a[2]+a[0]+a[3])
  		cout<<"YES";
  	else if(a[0]==a[2]+a[1]+a[3])
  		cout<<"YES";
  	else if(a[0]+a[3]+a[1]==a[2])
  		cout<<"YES";
  	else if(a[3]==a[2]+a[1]+a[0])
  		cout<<"YES";
  	else
  		cout<<"NO";
}
