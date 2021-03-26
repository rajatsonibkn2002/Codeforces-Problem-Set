//Problem Link: https://codeforces.com/contest/1506/problem/A
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

    long long int t, n, m, x, col, row;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>m>>x;
        if(x%n==0)
            col=x/n;
        else
            col=(x/n)+1;
        row = x-((col-1)*n);
        cout<<((row-1)*m) + col<<endl; 
    }

}
