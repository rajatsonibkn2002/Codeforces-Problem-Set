//Problem Link: http://codeforces.com/problemset/problem/1367/B
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

    int t, n, ne, no, count;
    cin>>t;
    FOR(i, 0, t){
    	count=0;
    	ne=0;
    	no=0;
    	cin>>n;
    	int a[n];
    	FOR(j, 0, n){
    		cin>>a[j];
    		if(a[j]%2==0)
    			ne++;
    		else
    			no++;
    	}
    	if(ne!=no+1 && n%2!=0)
    		cout<<-1<<endl;
    	else if(no!=ne && n%2==0)
    		cout<<-1<<endl;
    	else{
    		FOR(j, 0, n){
    			if(j%2!=a[j]%2 && j%2==0)
    				count++;
    		}
    		cout<<count<<endl;
    	}
    	
    }

}


