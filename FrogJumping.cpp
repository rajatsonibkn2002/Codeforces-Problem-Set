//Problem Link: https://codeforces.com/problemset/problem/1077/A
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

    long long int t, a, b, k;
    cin>>t;
    FOR(i, 0, t){
    	cin>>a>>b>>k;
    	if(k%2==0)
    		cout<<((a-b)*k)/2<<endl;
    	else
    		cout<<(a*(k+1))/2 - (b*(k-1))/2<<endl;
    }
    	
}





