//Problem Link: http://codeforces.com/problemset/problem/61/A
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

    string a, b;
    cin>>a>>b;
    FOR(i, 0, a.length()){
        if(a[i]==b[i])
            cout<<"0";
        else
            cout<<"1";
    }
}


