//Problem Link: https://codeforces.com/problemset/problem/676/A
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
    
    
    int n, min=0, max, a;
    cin>>n;
    FOR(i, 0, n){
        cin>>a;
        if((a==1 || a==n) && min==0)
            min=i+1;
        else if(a==1 || a==n)
            max=i+1;
    }
    // cout<<min<<" "<<max<<endl;
    if(min-1>n-max)
        cout<<max-(1);
    else
        cout<<n-min;

}       
