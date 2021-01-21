//Problem Link: https://codeforces.com/problemset/problem/551/A
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
            
    int n, an;
    cin>>n;
    vector <pair<int, int>> v;
    FOR(i, 0, n){
        cin>>an;
        v.push_back(make_pair(an, i+1));
    }
    sort(v.rbegin(), v.rend());
    int j=1;
    int temp=v[0].first;
    v[0].first=v[0].second;
    v[0].second=j;
    j++;
    FOR(i, 1, n){
        if(v[i].first==temp){
            temp=v[i].first;
            v[i].first=v[i].second;
            v[i].second=v[i-1].second;
            j++;
        }
        else{
            temp=v[i].first;
            v[i].first=v[i].second;
            v[i].second=j;
            j++;
        }
    }
    sort(v.begin(), v.end());
    FOR(i, 0, n){
        cout<<v[i].second<<" ";
    }

}
