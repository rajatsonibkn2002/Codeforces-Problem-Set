//Problem Link: https://codeforces.com/problemset/problem/900/A
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

    int n, x, y, sl=0, sr=0;
    cin>>n;
    FOR(i, 0, n){
        cin>>x>>y;
        if(x<0)
            sl++;
        else
            sr++;
    }
    if(sl-1==0 || sl-1==-1 || sr-1==-1 || sr-1==0)
        cout<<"Yes";
    else
        cout<<"No";

}
