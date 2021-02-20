//Problem Link: https://codeforces.com/problemset/problem/937/A
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
    
    int n, a;
    set <int> s;
    cin>>n;
    FOR(i, 0, n){
        cin>>a;
        if(a!=0){
            s.insert(a);
        }
    }
    cout<<s.size();
}       
