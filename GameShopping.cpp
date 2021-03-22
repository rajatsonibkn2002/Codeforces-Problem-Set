//Problem Link: https://codeforces.com/problemset/problem/1009/A
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

    int n, m, j=0, count=0;
    cin>>n>>m;
    int games[n], bills[m];
    FOR(i, 0, n)
        cin>>games[i];
    FOR(i, 0, m)
        cin>>bills[i];
    int current = bills[0];
    FOR(i, 0, n){
        if(current>=games[i]){
            j++;
            current=bills[j];
            count++;
        }
        if(j>m-1)
            current=-1;
    }
    cout<<count;
}
