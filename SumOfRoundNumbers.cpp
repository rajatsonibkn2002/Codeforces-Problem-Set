//Problem Link: https://codeforces.com/problemset/problem/1352/A
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

int power(int x, int y){
	int out=1;
	if(y==0)
		return 1;
	FOR(i, 0, y){
		out=out*x;
	}
	return out;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int t, n, c=0;
    cin>>t;
    FOR(i, 0, t){
    	vector <int> a;
    	c=0;
    	cin>>n;
    	while(n!=0){
    		if(n%10!=0){
    			a.push_back((n%10)*power(10,c));
    		}
    		n=n/10;
    		c++;
    	}
    	cout<<a.size()<<endl;
    	for (auto& it : a) { 
        	cout << it << ' '; 
    	}
    	cout<<endl;
    }
}


