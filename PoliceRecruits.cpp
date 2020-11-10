//Problem Link: http://codeforces.com/problemset/problem/427/A
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

    
   	int n, g, police=0, crime=0;
    cin>>n;
    FOR(i, 0, n){
    	cin>>g;
    	if(g==-1 && police>0)
    		police--;
    	else if(g==-1 && police==0)
    		crime++;
    	else
    		police = police+g;
    }
    cout<<crime;
}


