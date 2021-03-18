//Problem Link: https://codeforces.com/problemset/problem/1413/A
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

    int t, n;
    cin>>t;
    FOR(i, 0, t){
        cin>>n;
        int a[n];
        FOR(j, 0, n)
            cin>>a[j];
        for(int j=0; j<n; j=j+2){
            if(a[j]*a[j+1]<0)
                cout<<-1*a[j+1]<<" ";
            else
                cout<<a[j+1]<<" ";
            if(a[j]*a[j+1]>0)
                cout<<-1*a[j]<<" ";
            else
                cout<<a[j]<<" ";
        }
        cout<<endl;
    }


}
