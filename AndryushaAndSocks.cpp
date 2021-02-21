//Problem Link: https://codeforces.com/problemset/problem/780/A
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
    
    int n, a, max=0;
    cin>>n;
    set <int> s;
    FOR(i, 0, 2*n){
        cin>>a;
        if(s.find(a)==s.end())
            s.insert(a);
        else{
            s.erase(a);
        }
        if(s.size()>max)
            max=s.size();
    }
    cout<<max;
}       
