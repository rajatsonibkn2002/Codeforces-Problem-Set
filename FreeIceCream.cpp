//Problem Link: https://codeforces.com/problemset/problem/686/A
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

    int n;
    long long int x, d, c=0;
    cin>>n>>x;
    char sign;
    FOR(i, 0, n){
    	cin>>sign>>d;
    	if(sign=='+')
    		x=x+d;
    	else{
    		if(x>=d)
    			x=x-d;
    		else
    			c++;
    	}
    }
    cout<<x<<" "<<c;
}
