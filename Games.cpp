//Problem Link: https://codeforces.com/problemset/problem/268/A
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

    int n,a, b;
    cin>>n;
    int h[n], o[n], count=0;
    FOR(i, 0, n){
    	cin>>h[i]>>o[i];
    }
    FOR(i, 0, n){
    	FOR(j, 0, n){
    		if(i!=j){
    			if(h[i]==o[j]){
    				count++;
    			}
    		}
    	}
    }
    cout<<count;
}


