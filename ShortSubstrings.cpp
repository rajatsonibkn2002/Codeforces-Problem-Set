//Problem Link: http://codeforces.com/problemset/problem/1367/A
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

    int t;
    string b;
    cin>>t;
    FOR(i, 0, t){
    	cin>>b;
    	if(b.length()%2==0){
    		for(int j=0; j<b.length()-1; j=j+2){
    			cout<<b[j];
    		}
    		cout<<b[b.length()-1]<<endl;
    	}
    	else{
    		for(int j=0; j<b.length(); j=j+2){
    			cout<<b[j]<<endl;
    		}

    	}
    }
}



