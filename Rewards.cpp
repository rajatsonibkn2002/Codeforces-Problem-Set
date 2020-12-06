//Problem Link: https://codeforces.com/problemset/problem/448/A
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

    float a1, a2, a3, b1, b2, b3, n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;	
    if(ceil((a1+a2+a3)/5)+ceil((b1+b2+b3)/10)<=n)
    	cout<<"YES";
    else
    	cout<<"NO";
}
