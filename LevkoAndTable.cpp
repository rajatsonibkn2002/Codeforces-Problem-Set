//Problem Link: https://codeforces.com/problemset/problem/361/A
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

    int n, k;
    cin>>n>>k;
    FOR(i, 0, n){
        FOR(j, 0, n){
            if(i==j)
                cout<<k<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }


}
