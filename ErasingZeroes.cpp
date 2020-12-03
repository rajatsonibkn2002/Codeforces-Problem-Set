//Problem Link: https://codeforces.com/problemset/problem/1303/A
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

    int n, t, en, out, count;
    cin>>t;
    FOR(i, 0, t){
    	count=0; out=0; en=0;
    	string a;
    	cin>>a;
    	FOR(j, 0, a.length()){
    		if(a[j]=='1' && en==0)
    			en=1;
    		else if(a[j]=='1' && en==1){
    			out=out+count;
    			count=0;
    		}
    		else if(a[j]=='0' && en==1)
    			count++;
    	}
    	cout<<out<<endl;
    }
}
