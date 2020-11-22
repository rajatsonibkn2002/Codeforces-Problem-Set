//Problem Link: https://codeforces.com/problemset/problem/9/A
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

    int y, w;
    cin>>y>>w;
    if(7-max(y,w)==3)
    	cout<<1<<"/"<<2;
    else if(7-max(y,w)==2)
    	cout<<1<<"/"<<3;
    else if (7-max(y,w)==4)
    	cout<<2<<"/"<<3;
    else if (7-max(y,w)==6)
    	cout<<1<<"/"<<1;
    else
    	cout<<7-max(y,w)<<"/"<<6;
    
}





