//Problem Link: https://codeforces.com/problemset/problem/894/A
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

    string s;
    int i, j, k, n, count=0;
    cin>>s;
    n=s.length();
    FOR(i, 0, n){
    	if(s[i]=='Q'){
    		FOR(j, i, n){
    			if(s[j]=='A'){
    				FOR(k, j, n){
    					if(s[k]=='Q')
    						count++;
    				}
    			}
    		}
    	}
    }
    cout<<count;
}
