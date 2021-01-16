//Problem Link: https://codeforces.com/problemset/problem/1255/A
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
    
    int t, a, b, count;
    cin>>t;
    FOR(i, 0, t){
        count=0;
        cin>>a>>b;
        if(b>=a){
            count=count+((b-a)/5);
            a=a+(((b-a)/5)*5);
            count=count+((b-a)/2);
            a=a+(((b-a)/2)*2);
            count=count+((b-a)/1);
            a=a+(((b-a)/1)*1);
        }
        else{
            count=count+((a-b)/5);
            a=a-(((a-b)/5)*5);
            count=count+((a-b)/2);
            a=a-(((a-b)/2)*2);
            count=count+((a-b)/1);
            a=a-(((a-b)/1)*1);
        }
        cout<<count<<endl;
    }
}
