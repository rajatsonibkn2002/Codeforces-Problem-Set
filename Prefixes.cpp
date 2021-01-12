//Problem Link: https://codeforces.com/problemset/problem/1216/A
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

    int n, na, nb, op=0;
    string s;
    cin>>n>>s;
    na=nb=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a')
            na++;
        else
            nb++;
        if(i%2!=0 && na>nb){
            s[i]='b';
            na--;
            nb++;
            op++;
        }
        else if(i%2!=0 && nb>na){
            s[i]='a';
            nb--;
            na++;
            op++;
        }
        
    }
    cout<<op<<endl<<s;
}
