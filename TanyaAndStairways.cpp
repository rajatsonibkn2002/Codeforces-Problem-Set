//Problem Link: https://codeforces.com/problemset/problem/1005/A
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
    cin>>n;
    int a[n+1];
    vector <int> v;
    FOR(i, 0, n){
    	cin>>a[i];
    }
    a[n]=0;
    FOR(i, 0, n){
    	if(a[i+1]==1)
    		v.push_back(a[i]);
    }
    v.push_back(a[n-1]);
    cout<<v.size()<<endl;
    for(auto &it:v)
    	cout<<it<<" ";
  	
}
