//Problem Link: http://codeforces.com/problemset/problem/1030/A
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

    int n, l;
    cin>>n;
    FOR(i, 0, n){
        cin>>l;
        if(l==1){
            cout<<"HARD";
            exit(0);
        }
    }
    cout<<"EASY";
}


