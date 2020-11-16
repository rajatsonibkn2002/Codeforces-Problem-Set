//Problem Link: https://codeforces.com/problemset/problem/431/A
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

    int a1, a2, a3, a4, sum=0;
    string s;
    cin>>a1>>a2>>a3>>a4>>s;
    FOR(i, 0, s.length()){
    	if(s[i]==49)
    		sum=sum+a1;
    	else if(s[i]==50)
    		sum=sum+a2;
    	else if(s[i]==51)
    		sum=sum+a3;
    	else
    		sum=sum+a4;
    }
    cout<<sum;
}


