//Problem Link: https://codeforces.com/problemset/problem/1228/A
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

  	int l, r, test, issame;
  	cin>>l>>r;
  	FOR(i, l, r+1){
  		issame=0;
  		vector <int> v;
  		test=i;
  		while(test!=0){
  			v.push_back(test%10);
  			test=test/10;
  		}
  		FOR(j, 0, v.size()-1){
  			FOR(k, j+1, v.size()){
  				if(v[j]==v[k])
  					issame=1;
  			}
  		}
  		if(issame==0){
  			cout<<i;
  			exit(0);
  		}
  	}
  	cout<<-1;
}
