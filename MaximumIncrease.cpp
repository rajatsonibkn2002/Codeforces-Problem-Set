//Problem Link: https://codeforces.com/problemset/problem/702/A
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

    long long int n, out=0, count=1;
    cin>>n;
    int a[n];
    cin>>a[0];
    FOR(i, 1, n){
    	cin>>a[i];
    	if(a[i-1]>=a[i]){
    		out=max(out, count);
    		count=1;
    	}
    	else
    		count++;
    }
    out=max(out, count);
    cout<<out;
}





