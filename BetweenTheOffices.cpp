//Problem Link: https://codeforces.com/problemset/problem/867/A
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

    int n, sf=0, fs=0;
    string s;
    cin>>n>>s;
    FOR(i, 0, n-1){
        if(s[i]=='S' && s[i+1]=='F')
            sf++;
        else if(s[i]=='F' && s[i+1]=='S')
            fs++;
    }
    if(sf>fs)
        cout<<"YES";
    else
        cout<<"NO"; 
}

