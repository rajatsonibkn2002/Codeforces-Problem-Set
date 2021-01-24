//Problem Link: https://codeforces.com/problemset/problem/401/A
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
            
    int n, x, an, sum=0;
    cin>>n>>x;
    FOR(i, 0, n){
        cin>>an;
        sum+=an;
    }
    sum=abs(sum);
    if(sum%x==0)
        cout<<sum/x;
    else
        cout<<(sum/x)+1;
}
