//Problem Link: https://codeforces.com/problemset/problem/1408/A
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
    
    int t, n, an;
    cin>>t;
    FOR(i, 0, t){
        cin>>n;
        int a[n], b[n], c[n];
        FOR(j, 0, n)
            cin>>a[j];
        FOR(j, 0, n)
            cin>>b[j];
        FOR(j, 0, n)
            cin>>c[j];
        an=a[0];
        cout<<an<<" ";
        FOR(j, 1, n-1){
            if(a[j]!=an){
                cout<<a[j]<<" ";
                an=a[j];
            }
            else if(b[j]!=an){
                cout<<b[j]<<" ";
                an=b[j];
            }
            else{
                cout<<c[j]<<" ";
                an=c[j];
            }
        }
        if(a[n-1]!=a[0] && a[n-1]!=an)
            cout<<a[n-1];
        else if(b[n-1]!=a[0] && b[n-1]!=an)
            cout<<b[n-1];
        else
            cout<<c[n-1];
        cout<<endl; 
    }
}       
