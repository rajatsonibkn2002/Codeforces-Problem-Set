//Problem Link: https://codeforces.com/problemset/problem/1102/A
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

    long long int n;
    cin>>n;
    if(n==1)
        cout<<1;
    else if(n%2!=0){
        n=n-1;
        if((n/2)%2==0)
            cout<<1;
        else
            cout<<0;
    }
    else{
        if((n/2)%2==0)
            cout<<0;
        else
            cout<<1;
    }
}
