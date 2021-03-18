//Problem Link: https://codeforces.com/problemset/problem/1497/A
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

#define FOR(i,a,b)  for(long long i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t, n;
    cin>>t;
    FOR(i, 0, t){
        map<int, int> m;
        int allzero=0;
        cin>>n;
        int a[n];
        FOR(j, 0, n)
            cin>>a[j];
        sort(a, a+n);
        FOR(j, 0, n){
            m[a[j]]++;
        }
        for(auto &it:m){
            cout<<it.first<<" ";
            it.second--;
            if(it.second==0)
                allzero++;
        }
        while(allzero<m.size()){
            for(auto &it:m){
                if(it.second>0){
                    cout<<it.first<<" ";
                    it.second--;
                    if(it.second==0)
                        allzero++;
                }
            }
        }
        cout<<endl;
    }


}
