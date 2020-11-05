//Problem Link: https://codeforces.com/problemset/problem/1154/A
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

    int a[4], max=0, index;
    FOR(i, 0, 4){
    	cin>>a[i];
    	if(a[i]>max){
    		max=a[i];
    		index=i;
    	}
    }
    FOR(i, 0, 4){
    	if(i!=index)
    		cout<<max-a[i]<<" ";
    }
}


