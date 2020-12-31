//Problem Link: https://codeforces.com/problemset/problem/1440/A
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

    int t, n, c0, c1, h, sum=0;
    string s;
    cin>>t;
    FOR(i, 0, t){
        sum=0;
        cin>>n>>c0>>c1>>h>>s;
        if(h+c1<c0||h+c0<c1){
            if(h+c1<c0){
                FOR(j, 0, n){
                    if(s[j]=='0')
                        sum=sum+h+c1;
                    else
                        sum=sum+c1;
                }
            }
            else if(h+c0<c1){
                FOR(j, 0, n){
                    if(s[j]=='1')
                        sum=sum+h+c0;
                    else
                        sum=sum+c0;
                }
            }
        }
        else{
            FOR(j, 0, n){
                if(s[j]=='0')
                    sum=sum+c0;
                else
                    sum=sum+c1;
            }
        }
        cout<<sum<<endl;
    }
}
