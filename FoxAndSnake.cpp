//Problem Link: https://codeforces.com/problemset/problem/510/A
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

    int m, n, l=0;
    cin>>m>>n;
    FOR(i, 0, m){
    	FOR(j, 0, n){
    		if(i%2==0)
    			cout<<"#";
    		else{
    			if(l==0 && j==n-1)
    				cout<<"#";
    			else if(l==1 && j==0)
    				cout<<"#";
    			else
    				cout<<".";
    		}
    	}
    	cout<<endl;
    	if(l==0 && i%2!=0)
    		l=1;
    	else if(l==1 && i%2!=0)
    		l=0;
    }
}


