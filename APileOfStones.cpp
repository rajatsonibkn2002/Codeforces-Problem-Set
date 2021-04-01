//Problem Link: https://codeforces.com/problemset/problem/1159/A
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

    int n, count=0;
    string s;
    cin>>n>>s;
    FOR(i, 0, n){
        if(s[i]=='-')
            count--;
        else
            count++;
        if(count<0)
            count=0;
    }
    cout<<count<<endl;

}
