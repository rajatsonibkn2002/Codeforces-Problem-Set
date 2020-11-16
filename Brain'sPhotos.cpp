//Problem Link: http://codeforces.com/problemset/problem/707/A
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

    int n, m;
    char c;
    cin>>n>>m;
    FOR(i, 0, n*m){
    	cin>>c;
    	if(c==67||c==77||c==89){
    		cout<<"#Color";
    		exit(0);
    	}
    }
    cout<<"#Black&White";
}


