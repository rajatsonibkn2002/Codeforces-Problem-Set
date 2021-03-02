//Problem Link: https://codeforces.com/problemset/problem/897/A
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
#define FOR(i,a,b)  for(long long int i=a;i<b;i++)
#include <vector>

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
    
    
    int n, m, l, r;
    char c1, c2;
    cin>>n>>m;
    string s;
    cin>>s;
    FOR(i, 0, m){
        cin>>l>>r>>c1>>c2;
        FOR(j, l-1, r){
            if(s[j]==c1)
                s[j]=c2;
        }
    }
    cout<<s;
}       
