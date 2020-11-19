//Problem Link: https://codeforces.com/problemset/problem/711/A
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

    int n;
    cin>>n;
    char a[n][5];
    int nn=0;
    FOR(i, 0, n){
    	FOR(j, 0, 5){
    		cin>>a[i][j];
    		if(((j==1&&a[i][j]==79&&a[i][j-1]==79)||(j==4&&a[i][j]==79&&a[i][j-1]==79))&&nn==0){
    			cout<<"YES"<<endl;
    			a[i][j]=43;
    			a[i][j-1]=43;
    			nn=1;
    		}
    	}
    }
    if(nn==0)
    	cout<<"NO";
    else{
    	FOR(i, 0, n){
    		FOR(j, 0, 5){
    			cout<<a[i][j];
    		}
    		cout<<endl;
    	}
    }
}





