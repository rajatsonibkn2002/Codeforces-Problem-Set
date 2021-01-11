//Problem Link: https://codeforces.com/problemset/problem/1445/A
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

    int t, n, x;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>x;
        bool yes=true;
        int a[n], b[n];
        FOR(j, 0, n)
            cin>>a[j];
        FOR(j, 0, n){
            cin>>b[j];
            if(b[j]+a[n-j-1]>x)
                yes=false;
        }
        if(yes)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
