//Problem Link: https://codeforces.com/problemset/problem/513/A
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
#define FOR(i,a,b)  for(i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    int n1, n2, k1, k2;
    cin>>n1>>n2>>k1>>k2;
    while(1){
    	n1=n1-1;
    	if(n1<0){
    		cout<<"Second";
    		exit(0);
    	}
    	n2=n2-1;
    	if(n2<0){
    		cout<<"First";
    		exit(0);
    	}
    }
}
