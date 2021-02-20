//Problem Link: https://codeforces.com/problemset/problem/1106/A
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
    
    int n, count=0;
    cin>>n;
    char a[n][n];
    FOR(i, 0, n){
        FOR(j, 0, n)
            cin>>a[i][j];
    }
    FOR(i, 0, n){
        FOR(j, 0, n){
            if((i+1<n) && (j+1<n) && (j-1>=0) && (i-1>=0) && a[i][j]=='X' && a[i-1][j-1]=='X' && a[i-1][j+1]=='X' && a[i+1][j-1]=='X' && a[i+1][j+1]=='X')
                count++;
        }
    }
    cout<<count;
}       
