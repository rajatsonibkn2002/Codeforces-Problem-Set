//Problem Link: https://codeforces.com/problemset/problem/1285/A
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

    int n, l=0, r=0;
    string s;
    cin>>n>>s;
    FOR(i, 0, n){
    	if(s[i]==76)
    		l++;
    	else
    		r++;
    }
    l = -1*l;
    cout<<abs(r-l)+1;
}





