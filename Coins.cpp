//Problem Link: https://codeforces.com/problemset/problem/1061/A
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

    int n, s, sum=0, count=0;
    cin>>n>>s;
    int i=n;
    while(sum<s){
        if(sum+i>s)
            i--;
        else{
            sum=sum+i;
            count++;
        }
    }
    cout<<count;
}
