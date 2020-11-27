//Problem Link: https://codeforces.com/problemset/problem/1196/A
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

    long long int q;
    cin>>q;
    FOR(i, 0, q){
    	long long int a[3], out;
    	cin>>a[0]>>a[1]>>a[2];
    	sort(a, a+3);
    	if((a[2]-a[1])%2==0)
    		out=a[2]-((a[2]-a[1])/2)+(a[0]/2);
    	else
    		out=a[2]-((a[2]-a[1])/2)+((a[0]-1)/2);
    	cout<<out<<endl;
    }
	
		    
}





