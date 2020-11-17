//Problem Link: https://codeforces.com/problemset/problem/1296/A
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)
#include <vector>



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    long long int t; cin >> t;
    while(t--) {
    int n; cin >> n;
    bool ans=false;
    int noofodd=0;
    FOR(i,0,n) {
        int local; cin >> local;
        if(local%2) {
            ans=true; noofodd++;
        }
    }
    if(ans and (noofodd!=n or noofodd%2)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;

  }
}





