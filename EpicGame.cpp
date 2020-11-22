//Problem Link: https://codeforces.com/problemset/problem/119/A
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

    int a, b, n, turn=0;
    cin>>a>>b>>n;
    while(1){
    	if(__gcd(a, n)<=n && turn%2==0){
    		n=n-__gcd(a, n);
    		turn++;
    	}
    	else if(__gcd(b, n)<=n && turn%2!=0){
    		n=n-__gcd(b, n);
    		turn++;
    	}
    	else{
    		if(turn%2!=0)
    			cout<<0;
    		else
    			cout<<1;
    		exit(0);
    	}
    }
    
}





