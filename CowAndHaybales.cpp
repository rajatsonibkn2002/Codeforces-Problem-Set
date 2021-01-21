//Problem Link: https://codeforces.com/problemset/problem/1307/A
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
            
    int t, n, d;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>d;
        int a[n];
        FOR(j, 0, n){
            cin>>a[j];
        }
        int j=1;
        bool count=false;
        while(d>0 && j<n){
            if(a[j]>0 &&j<n){
                d=d-j;
                if(d>=0)
                    a[0]++;
                a[j]--;
            }
            else{
                j++;
                if(a[j]>0 &&j<n){
                    d=d-j;
                    if(d>=0)
                        a[0]++;
                    a[j]--;
                }
            }
        }
        cout<<a[0]<<endl;
    }

}
