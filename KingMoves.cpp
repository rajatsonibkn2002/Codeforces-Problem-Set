//Problem Link: https://codeforces.com/problemset/problem/710/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;

#define PB push_back
#define MP make_pair

#define FOR(i,a,b)  for(int i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    char c;
    int d, count=0;
    cin>>c>>d;  
    if(c-1>='a')
        count++;
    if(d-1>=1)
        count++;
    if(d+1<9)
        count++;
    if(c+1<='h')
        count++;
    if(c-1>='a' && d-1>=1)
        count++;
    if(c+1<='h' && d-1>=1)
        count++;
    if(c-1>='a' && d+1<9)
        count++;
    if(c+1<='h' && d+1<9)
        count++;
    cout<<count;
}
