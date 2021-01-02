//Problem Link: https://codeforces.com/problemset/problem/1167/A
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

    int t, n, possible, count;
    string s;
    cin>>t;
    FOR(i, 0, t){
        possible=0;
        count=0;
        cin>>n>>s;
        FOR(j, 0, n){
            if(s[j]=='8')
                possible=1;
            if(possible==1)
                count++;
        }
        if(possible==1&&count>=11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
