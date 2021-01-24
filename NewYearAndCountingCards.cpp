//Problem Link: https://codeforces.com/problemset/problem/908/A
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
            
    string s;
    int count=0;
    cin>>s;
    FOR(i, 0, s.length()){
        if(int(s[i])>=97){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                count++;
        }
        else{
            if(int(s[i])%2!=0)
                count++;
        }
    }
    cout<<count;
}
