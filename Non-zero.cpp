//Problem Link: https://codeforces.com/problemset/problem/1300/A
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

  	int t, n, an, sum, count;
  	cin>>t;
  	FOR(i, 0, t){
  		sum=0;
  		count=0;
  		cin>>n;
  		FOR(j, 0, n){
  			cin>>an;
  			if(an==0){
  				count++;
  				sum=sum+1;
  			}
  			else
  				sum=sum+an;
  		}
  		if(sum==0)
  			count++;
  		cout<<count<<endl;
  	}
}
