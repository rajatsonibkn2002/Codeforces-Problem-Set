//Problem Link: https://codeforces.com/problemset/problem/1453/A
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
#define FOR(i,a,b)  for(unsigned long long int i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    int t, n, m, am, count;
    cin>>t;
    FOR(i, 0, t){
        count=0;
        cin>>n>>m;
        int a[n];
        FOR(j, 0, n)
            cin>>a[j];
        FOR(j, 0, m){
            int cc=0;
            cin>>am;
            FOR(k, 0, n){
                if(am==a[k])
                    cc++;
            }
            if(cc!=0)
                count++;
        }
        cout<<count<<endl;
    }
}
