//Problem Link: https://codeforces.com/problemset/problem/1287/A
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    int t, k, docount, count;
    string s;
    cin>>t;
    FOR(i, 0, t){
        vector <int> v;
        docount=0;
        count=0;
        cin>>k>>s;
        FOR(j, 0, k){
            if(s[j]=='A'){
                docount=1;
                v.push_back(count);
                count=0;
            }
            else if(s[j]=='P' && docount==1)
                count++;
        }
        v.push_back(count);
        sort(v.begin(), v.end());
        cout<<v[v.size()-1]<<endl;
    }
}
