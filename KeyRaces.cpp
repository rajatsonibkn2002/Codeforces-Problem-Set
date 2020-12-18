//Problem Link: https://codeforces.com/problemset/problem/835/A
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

    int s, v1, v2, t1, t2;
    cin>>s>>v1>>v2>>t1>>t2;
    v1 = s*v1+2*t1;
    v2=s*v2+2*t2;
    if(v1==v2)
    	cout<<"Friendship";
    else if(v1>v2)
    	cout<<"Second";
    else
    	cout<<"First";
}
