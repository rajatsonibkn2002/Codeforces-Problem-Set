//Problem Link: https://codeforces.com/problemset/problem/1283/A
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

    int t, h, m;
    cin>>t;
    FOR(i, 0, t){
    	cin>>h>>m;
    	if(h==0&&m==0)
    		cout<<0<<endl;
    	else
    		cout<<((24-h-1)*60)+(60-m)<<endl;
    }
}





