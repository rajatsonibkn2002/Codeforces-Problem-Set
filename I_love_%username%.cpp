//Problem Link: https://codeforces.com/problemset/problem/155/A
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

    int n, max, min, c=0, s;
    cin>>n;
    cin>>s;
    max=s;
    min=s;
    FOR(i, 1, n){
    	cin>>s;
    	if(s>max){
    		c++;
    		max=s;
    	}
    	else if(s<min){
    		c++;
    		min=s;
    	}
    }
    cout<<c;
}


