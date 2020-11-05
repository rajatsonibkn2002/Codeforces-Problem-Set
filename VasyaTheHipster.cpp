//Problem Link: https://codeforces.com/problemset/problem/581/A
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

    int a, b;
    cin>>a>>b;
    if(a>0 && b>0){
    	if(a<b){
    		cout<<a<<" ";
    		b=b-a;
    		a=0;
    	}
    	else{
    		cout<<b<<" ";
    		a=a-b;
    		b=0;
    	}
    }
    else{
    	cout<<0<<" ";
    }
    if(a>0)
    	cout<<a/2;
    else	
    	cout<<b/2;
}


