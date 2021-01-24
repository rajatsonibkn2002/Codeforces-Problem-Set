//Problem Link: https://codeforces.com/problemset/problem/987/A
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
            
    int t, purple=0, green=0, blue=0, orange=0, red=0, yellow=0;
    string s;
    cin>>t;
    FOR(i, 0, t){
        cin>>s;
        if(s=="purple")
            purple++;
        else if(s=="green")
            green++;
        else if(s=="blue")
            blue++;
        else if(s=="orange")
            orange++;
        else if(s=="red")
            red++;
        else
            yellow++;
    }
    cout<<6-t<<endl;
    if(!purple)
        cout<<"Power"<<endl;
    if(!green)
        cout<<"Time"<<endl;
    if(!blue)
        cout<<"Space"<<endl;
    if(!orange)
        cout<<"Soul"<<endl;
    if(!red)
        cout<<"Reality"<<endl;
    if(!yellow)
        cout<<"Mind"<<endl;
}
