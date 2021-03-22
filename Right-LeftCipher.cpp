//Problem Link: https://codeforces.com/problemset/problem/1085/A
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

#define FOR(i,a,b)  for(int i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    string t, s;
    cin>>t;
    if(t.length()%2==0){
        for(int j=t.length()-1; j>=t.length()/2; j--){
            s.push_back(t[j]);
            s.push_back(t[t.length()-j-1]);
        }
        for(int j=s.length()-1; j>=0; j--)
            cout<<s[j];
    }
    else{
        s.push_back(t[t.length()/2]);
        FOR(i, (t.length()/2)+1, t.length()){
            s.push_back(t[i]);
            s.push_back(t[t.length()-i-1]);
        }
        cout<<s;
    }
}
