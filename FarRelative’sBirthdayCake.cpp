//Problem Link: https://codeforces.com/problemset/problem/629/A
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

    int n, count=0, c;
    cin>>n;
    char a[n][n];
    FOR(i, 0, n){
        c=0;
        FOR(j, 0, n){
            cin>>a[i][j];
            if(a[i][j]=='C')
                c++;
        }
        count+=(c*(c-1))/2;
    }   
    FOR(i, 0, n){
        c=0;
        FOR(j, 0, n){
            if(a[j][i]=='C')
                c++;
        }
        count+= (c*(c-1))/2;
    }
    cout<<count;
    


}
