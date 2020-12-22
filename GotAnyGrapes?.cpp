//Problem Link: https://codeforces.com/problemset/problem/1114/A
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

    int x, y, z, a, b, c;
    cin>>x>>y>>z>>a>>b>>c;
    if(x<=a)
    	a=a-x;
    else{
    	cout<<"NO";
    	exit(0);
    }
    if(y<=a+b){
    	a=a-y;
    }
    else{
    	cout<<"NO";
    	exit(0);
    }
    if(z<=a+b+c)
    	a=a-z;
    else{
    	cout<<"NO";
    	exit(0);
    }
    cout<<"YES";
}
