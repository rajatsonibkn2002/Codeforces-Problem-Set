//Problem Link: https://codeforces.com/problemset/problem/1099/A
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

#define FOR(i,a,b)  for(long long i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int w, h, u1, d1, u2, d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    while(h>0){
        w+=h;
        if(h==d1)
            w-=u1;
        if(h==d2)
            w-=u2;
        if(w<0)
            w=0;
        h--;
    }
    cout<<w;


}
