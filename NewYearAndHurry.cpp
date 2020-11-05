//Problem Link: https://codeforces.com/problemset/problem/750/A
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

    int n, k, t;
    cin>>n>>k;
    while(1 && n>0){
    	t=(n*(n+1)/2)*5;
    	if(t<=240-k){
    		cout<<n;
    		exit(0);
    	}
    	n--;
    }
    cout<<0;
}


