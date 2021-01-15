//Problem Link: https://codeforces.com/problemset/problem/1139/A
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
    
    int n, sum=0;
    string s;
    cin>>n>>s;
    FOR(i, 0, n){
        if((int(s[i])-48)%2==0)
            sum=sum+i+1;
    }
    cout<<sum;
}
