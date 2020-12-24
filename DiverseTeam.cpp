//Problem Link: https://codeforces.com/problemset/problem/988/A
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

    int n, k, an, shouldinsert;
    cin>>n>>k;
    vector <pair<int, int>> v;
    FOR(i, 0, n){
        shouldinsert=1;
        cin>>an;
        for(auto &it:v){
            if(it.first==an)
                shouldinsert=0;
        }
        if(shouldinsert==1)
            v.push_back(make_pair(an, i+1));
    }
    if(v.size()>=k){
        cout<<"YES"<<endl;
        FOR(i, 0, k){
            cout<<v[i].second<<" ";
        }
    }
    else
        cout<<"NO";
}
