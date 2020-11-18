//Problem Link: https://codeforces.com/problemset/problem/381/A
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

    int n, ss=0, ds=0, a, b;
    cin>>n;
    int arr[n];
    a=0;
    b=n-1;
    FOR(i, 0, n){
    	cin>>arr[i];
    }
    FOR(i, 0, n){
    	if(i%2==0){
    		if(arr[a]>=arr[b]){
    			ss = ss+arr[a];
    			a++;
    		}
    		else{
    			ss=ss+arr[b];
    			b--;
    		}
    	}
    	else{
    		if(arr[a]>=arr[b]){
    			ds = ds+arr[a];
    			a++;
    		}
    		else{
    			ds=ds+arr[b];
    			b--;
    		}
    	}
    }
    cout<<ss<<" "<<ds;
}





