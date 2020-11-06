//Problem Link: https://codeforces.com/problemset/problem/732/A
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

    int k, r, output=0;
    cin>>k>>r;
    while(1){
    	output++;
    	int p = k*output;
    	if(p%10==0 || p%10==r){
    		cout<<output;
    		exit(0);
    	}
    }
}


