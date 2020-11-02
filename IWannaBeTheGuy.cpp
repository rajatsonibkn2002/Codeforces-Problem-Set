//Problem Link: https://codeforces.com/problemset/problem/469/A
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

    int n, p, q, s;
    cin>>n>>p;
    int a[n+1]={0};
    FOR(i, 0, p){
    	cin>>s;
    	a[s]=1;
    }
    cin>>q;
    FOR(i, 0, q){
    	cin>>s;
    	a[s]=1;
    }
    FOR(i, 1, n+1){
    	if(a[i]==0){
    		cout<<"Oh, my keyboard!";
    		exit(0);
    	}
    }
    cout<<"I become the guy.";
}


