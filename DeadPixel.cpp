//Problem Link: https://codeforces.com/problemset/problem/1315/A
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

    int n, a, b, x, y, f, g, h;
    cin>>n;
    FOR(i, 0, n){
        cin>>a>>b>>x>>y;
        x++, y++;
        f=a*(y-1);
        g=a*(b-y);
        h=(x-1)*b;
        int l = (a-x)*b;
        cout<<max(f, max(g, max(h, l)))<<endl;
    }

}
