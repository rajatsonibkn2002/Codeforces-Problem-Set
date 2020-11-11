//Problem Link: http://codeforces.com/problemset/problem/432/A
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

    int n, k, y, count=0, teams=0;
    cin>>n>>k;
    FOR(i, 0, n){
    	cin>>y;
    	if(y<=5-k){
    		count++;
    		if(count==3){
    			count=0;
    			teams++;
    		}
    	}
    }
    cout<<teams;
}


