//Problem Link: https://codeforces.com/problemset/problem/1144/A
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

    int n;
    string s;   
    cin>>n;
    FOR(i, 0, n){
        bool isdiverse=true, iscontinuous=true;
        int a[26]={0}, count=0;
        cin>>s;
        FOR(j, 0, s.length())
            a[s[j]-97]++;
        FOR(j, 0, 26){
            if(a[j]==1 && iscontinuous){
                count++;
            }
            if(a[j]==0 && count>0){
                iscontinuous=false;
            }
            if(a[j]>1)
                isdiverse=false;
        }
        if(isdiverse && count==s.length())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
