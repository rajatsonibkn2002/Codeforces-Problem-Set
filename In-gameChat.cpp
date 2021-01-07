//Problem Link: https://codeforces.com/problemset/problem/1411/A
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

    int t, n, shouldcount, count;
    string s;
    cin>>t;
    FOR(i, 0, t){
        count=shouldcount=0;
        cin>>n>>s;
        for(int j=n-1; j>=0&&shouldcount==0; j--){
            if(s[j]==')')
                count++;
            else
                shouldcount=1;
        }
        if(count>n-count)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
