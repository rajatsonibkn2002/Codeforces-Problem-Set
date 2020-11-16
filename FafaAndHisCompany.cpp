//Problem Link: https://codeforces.com/problemset/problem/935/A
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

    int n, count=1;
    cin>>n;
    FOR(i, 2, (n/2)+1){
    	if((n-i)%i==0)
    		count++;
    }
    cout<<count;
}


