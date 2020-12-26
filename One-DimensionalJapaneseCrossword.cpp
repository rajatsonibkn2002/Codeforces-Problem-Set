//Problem Link: https://codeforces.com/problemset/problem/721/A
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

    int k, shouldcount=0, count=0;
    string s;
    vector <int> v;
    cin>>k>>s;
    FOR(i, 0, k){
        if(s[i]=='B'){
            shouldcount=1;
            count++;
        }
        else{
            shouldcount=0;
            if(count!=0)
                v.push_back(count);
            count=0;
        }
    }
    if(shouldcount==1 && count!=0)
        v.push_back(count);
    cout<<v.size()<<endl;
    for(auto &it:v)
        cout<<it<<" ";
}
