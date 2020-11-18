//Problem Link: https://codeforces.com/problemset/problem/1433/A
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

    int t, n, count;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n;
    	int c=0;
    	count = ((n%10)-1)*10;
    	while(n%10!=0){
    		c++;
    		n=n/10;
    	}
    	cout<<count+((c*(c+1))/2)<<endl;
    }
}





