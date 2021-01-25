//Problem Link: https://codeforces.com/problemset/problem/1189/A
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
            
    int n, one=0, zero=0;
    string s;
    cin>>n>>s;
    FOR(i, 0, n){
        if(s[i]=='1')
            one++;
        else
            zero++;
    }
    if(one==zero){
        cout<<2<<endl<<s[0]<<' '<<s.substr(1, n-1);
    }
    else
        cout<<1<<endl<<s;
    
}
