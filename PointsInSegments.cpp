//Problem Link: https://codeforces.com/problemset/problem/1015/A
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

    int n, m, count=0;
    vector <int> v;
    cin>>n>>m;
    int l[n], r[n];
    FOR(j, 0, n){
        cin>>l[j]>>r[j];
    }
    FOR(i, 1, m+1){
        int shouldcount=1;
        FOR(j, 0, n){
            if(i>=l[j]&&r[j]>=i)
                shouldcount=0;
        }
        if(shouldcount==1){
            count++;
            v.push_back(i);
        }
    }
    if(v.size()>0){
        cout<<v.size()<<endl;
        for(auto &it: v){
            cout<<it<<" ";
        }
    }
    else
        cout<<0;
}
