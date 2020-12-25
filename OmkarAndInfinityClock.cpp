//Problem Link: https://codeforces.com/problemset/problem/1392/B
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

    long long int t, n, k, max, min, vn;
    cin>>t;
    FOR(i, 0, t){
        vector <long long int> v;
        cin>>n>>k;
        FOR(j, 0, n){
            cin>>vn;
            v.push_back(vn);
        }
        max=*max_element(v.begin(), v.end());
        min=*min_element(v.begin(), v.end());
        if(k%2!=0){
            FOR(j, 0, 1){
                FOR(k, 0, n){
                    v[k]=max-v[k];
                }
                max=max-min;
                min=0;
            }
        }
        else{
            FOR(j, 0, 2){
                FOR(k, 0, n){
                    v[k]=max-v[k];
                }
                max=max-min;
                min=0;
            }
        }
        for(auto &it:v)
            cout<<it<<" ";
        cout<<endl;
    }
}
