//Problem Link: http://codeforces.com/problemset/problem/41/A
/*
  Author: Rajat Soni
*/


#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)  for(int i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    string s, t;
    cin>>s>>t;
    if(s.length()!=t.length()){
        cout<<"NO";
        exit(0);
    }
    FOR(i, 0, s.length()){
        if(s[i]!=t[t.length()-1+i]){
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";

}


