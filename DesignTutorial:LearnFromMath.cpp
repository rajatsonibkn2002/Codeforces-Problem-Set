//Problem Link: https://codeforces.com/problemset/problem/472/A
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


int iscomposite(int n){
	int i,c=0;
  	for(i=1;i<=n;i++)
  	{
    	if(n%i==0)
      		c++;
  	}
  	if(c>2)
  		return 1;
  	return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int n, x, y;
    cin>>n;
    x=4;
    y=n-x;
    while((not iscomposite(x)) || (not iscomposite(y))){
    	x++;
    	y=n-x;
    }
    cout<<x<<" "<<y;
}


