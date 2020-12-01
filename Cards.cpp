//Problem Link: https://codeforces.com/problemset/problem/1220/A
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

    int n, one=0, zero=0;
    string s;
    cin>>n>>s;
    FOR(i, 0, n){
    	if(s[i]==110)
    		one++;
    	else if(s[i]==114)
    		zero++;
    }
    FOR(i, 0, one)
    	cout<<"1"<<" "; 
    FOR(i, 0, zero)
    	cout<<"0"<<" ";
}





