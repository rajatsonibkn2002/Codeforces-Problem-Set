//Problem Link: https://codeforces.com/problemset/problem/144/A
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


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int n, max=0, index, temp, out=0, min=101;
  	cin>>n;
  	int a[n];
  	FOR(i, 0, n){
  		cin>>a[i];
  		if(a[i]>max){
  			max=a[i];
  			index=i;
	  	}
  	}
  	out = index;
  	for(int i=index; i>=1; i--){
  		temp = a[i];
  		a[i]=a[i-1];
  		a[i-1]=temp;
  	}
  	FOR(i, 0, n){
  		if(a[i]<=min){
  			min=a[i];
  			index=i;
	  	}
  	}
  	out = out+n-index-1;
  	cout<<out;
}


