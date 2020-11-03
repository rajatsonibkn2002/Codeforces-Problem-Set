//Problem Link: https://codeforces.com/problemset/problem/785/A
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

    int n, output=0;
    string s;
    cin>>n;
    FOR(i, 0, n){
    	cin>>s;
    	if(s=="Tetrahedron")
    		output=output+4;
    	else if(s=="Cube")
    		output=output+6;
    	else if(s=="Octahedron")
    		output=output+8;
    	else if(s=="Dodecahedron")
    		output=output+12;
    	else
    		output=output+20;
    }
    cout<<output;
}


