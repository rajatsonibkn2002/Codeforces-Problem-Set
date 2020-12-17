//Problem Link: https://codeforces.com/problemset/problem/255/A
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

  	int n, chest=0, biceps=0, back=0;
  	cin>>n;
  	int a[n];
  	FOR(i, 0, n){
  		cin>>a[i];
  	}
  	for(int i=1; i<=n; i=i+3)
  		chest=chest+a[i-1];
  	for(int i=2; i<=n; i=i+3)
  		biceps=biceps+a[i-1];
  	for(int i=3; i<=n; i=i+3)
  		back=back+a[i-1];
  	if(chest>biceps && chest>back)
  		cout<<"chest";
  	else if(chest<biceps && biceps>back)
  		cout<<"biceps";
  	else
  		cout<<"back";
}
