//Problem Link: https://codeforces.com/problemset/problem/1243/A
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
            
    int t, n, out=0, an;
    cin>>t;
    FOR(i, 0, t){
        vector <int> v;
        cin>>n;
        FOR(j, 0, n){
            cin>>an;
            v.push_back(an);
        }
        sort(v.rbegin(), v.rend());
        bool shouldcheck=true;
        for(int j=0; j<n && shouldcheck; j++){
            if(v[j]>=j+1)
                out=j+1;
            else
                shouldcheck=false;
        }
        cout<<out<<endl;
    }

}
