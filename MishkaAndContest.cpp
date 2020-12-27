//Problem Link: https://codeforces.com/problemset/problem/999/A
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

    int n, k, an, shouldcount, count=0;
    vector <int> v;
    cin>>n>>k;
    FOR(i, 0, n){
        cin>>an;
        v.push_back(an);
    }
    shouldcount=1;
    while(shouldcount==1 && v.size()>0){
        if(v[0]<=k){
            count++;
            v.erase(v.begin());
        }
        else
            shouldcount=0;
    }
    shouldcount=1;
    while(shouldcount==1 && v.size()>0){
        if(v.back()<=k){
            count++;
            v.erase(v.end()-1);
        }
        else
            shouldcount=0;
    }
    cout<<count;

}
