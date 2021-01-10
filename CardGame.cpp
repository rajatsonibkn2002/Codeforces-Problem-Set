//Problem Link: https://codeforces.com/problemset/problem/1270/A
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

    int t, n, k1, k2, an;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>k1>>k2;
        bool first=false, second=false;
        FOR(j, 0, k1){
            cin>>an;
            if(an==n)
                first=true;
        }
        FOR(j, 0, k2){
            cin>>an;
            if(an==n)
                second=true;
        }
        if(first)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
