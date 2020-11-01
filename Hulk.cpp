//Problem Link: http://codeforces.com/problemset/problem/705/A
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

    int n;
    cin>>n;
    FOR(i, 1, n){
        if(i%2==0)
            cout<<"I love that ";
        else
            cout<<"I hate that ";
    }
    if(n%2==0)
        cout<<"I love it";
    else
        cout<<"I hate it";
}


