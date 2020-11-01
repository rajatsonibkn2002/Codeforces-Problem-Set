//Problem Link: http://codeforces.com/problemset/problem/344/A
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


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int n, p, f, count=1;
    cin>>n>>p;
    FOR(i, 0, n-1){
        cin>>f;
        if(p!=f)
            count++;
        p=f;
    }
    cout<<count;
}


