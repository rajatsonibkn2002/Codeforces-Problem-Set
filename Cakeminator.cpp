//Problem Link: https://codeforces.com/problemset/problem/330/A
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

  	int r, c, out=0, havetocount;
  	cin>>r>>c;
  	char a[r][c];
  	FOR(i, 0, r){
  		havetocount=1;
  		FOR(j, 0, c){
  			cin>>a[i][j];
  			if(a[i][j]=='S')
  				havetocount=0;
  		}
  		if(havetocount==1){
  			FOR(j, 0, c){
  				if(a[i][j]=='.'){
  					out++;
  					a[i][j]='X';
  				}
  			}
  		}
  	}
  	FOR(i, 0, c){
  		havetocount=1;
  		FOR(j, 0, r){
  			if(a[j][i]=='S')
  				havetocount=0;
  		}
  		if(havetocount==1){
  			FOR(j, 0, r){
  				if(a[j][i]=='.'){
  					out++;
  					a[j][i]='X';
  				}
  			}
  		}
  	}
  	cout<<out;
}
