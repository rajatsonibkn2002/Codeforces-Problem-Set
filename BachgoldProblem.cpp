//Problem Link: http://codeforces.com/problemset/problem/749/A
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
    cin>>n;
    if(n%2==0){
    	cout<<n/2<<endl;
    	FOR(i, 0, n/2)
    		cout<<2<<" ";
    }
    else{
    	cout<<((n-3)/2)+1<<endl;
    	FOR(i, 0, (n-3)/2)
    		cout<<2<<" ";
    	cout<<3;
    }
}


