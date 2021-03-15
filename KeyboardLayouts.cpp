//Problem Link: https://codeforces.com/problemset/problem/831/B
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;

#define PB push_back
#define MP make_pair

#define FOR(i,a,b)  for(long long i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string a, b, c;
    cin>>a>>b>>c;
    map<char, char> m;
    FOR(i, 0, a.length())
        m.insert({a[i], b[i]});

    FOR(i, 0, c.length()){
        if(isalpha(c[i])){
            if(isupper(c[i])){
                c[i]=tolower(c[i]);
                auto it=m.find(c[i]);
                char ss = toupper(it->second);
                cout<<ss;
            }
            else{
                auto it=m.find(c[i]);
                cout<<it->second;
            }
        }
        else
            cout<<c[i];
    }


}
