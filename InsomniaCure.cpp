//Problem Link: https://codeforces.com/problemset/problem/148/A
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

    int k, l, m, n, d, count=0;
    cin>>k>>l>>m>>n>>d;
    if(k==1||l==1||m==1||n==1)
    	cout<<d;
    else{
    	FOR(i, 1, d+1){
    		if(i%k==0||i%l==0||i%m==0||i%n==0)
    			count++;
    	}
    	cout<<count;
    }
}


