//Problem Link: http://codeforces.com/problemset/problem/509/A
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

    int n;
    cin>>n;
    int a[n][n];
    FOR(i, 0, n){
    	FOR(j, 0, n){
    		if(i==0 || j==0)
    			a[i][j]=1;
    		else
    			a[i][j]= a[i-1][j]+a[i][j-1];
    	}
    }
    cout<<a[n-1][n-1];
}


