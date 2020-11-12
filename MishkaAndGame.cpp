//Problem Link: http://codeforces.com/problemset/problem/703/A
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

    int n, m, c, ms=0, cs=0;
    cin>>n;
    FOR(i, 0, n){
    	cin>>m>>c;
    	if(m>c)
    		ms++;
    	else if(m<c)
    		cs++;
    }
    if(ms>cs)
    	cout<<"Mishka";
    else if(ms<cs)
    	cout<<"Chris";
    else
    	cout<<"Friendship is magic!^^";
}


