//Problem Link: https://codeforces.com/problemset/problem/1461/A
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

    int t, n, k;
    cin>>t;
    FOR(i, 0, t){
        bool a=true, b=false, c=false;
        cin>>n>>k;
        FOR(j, 0, k)
            cout<<'c';
        FOR(j, 0, n-k){
            if(a==true){
                cout<<'a';
                b=true;
                a=false;
            }
            else if(b==true){
                cout<<'b';
                b=false;
                c=true;
            }
            else{
                cout<<'c';
                a=true;
                c=false;
            }
        }
        cout<<endl;
    }
}
