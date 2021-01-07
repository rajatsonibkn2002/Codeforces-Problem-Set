//Problem Link: https://codeforces.com/problemset/problem/701/A
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
    vector <pair<int, int>> v;
    cin>>n;
    FOR(i, 1, n+1){
        cin>>an;
        v.push_back(make_pair(an, i));
    }
    sort(v.begin(), v.end());
    FOR(i, 0, n/2){
        cout<<v[i].second<<" "<<v[n-i-1].second<<endl;
    }
}
