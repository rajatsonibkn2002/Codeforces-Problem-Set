//Problem Link: https://codeforces.com/problemset/problem/1493/A
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

    int t, aa;
    float n, k;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>k;
        float a = (n-1)-floor((k-1)/2);
        cout<<a<<endl;
        if((int(k-1))%2!=0)
            aa = ceil((k-1)/2);
        else
            aa=ceil(k/2);
        FOR(j, aa, k)
            cout<<j<<" ";
        FOR(j, k+1, n+1)
            cout<<j<<" ";
        cout<<endl;
    }


}
