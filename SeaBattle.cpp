//Problem Link: https://codeforces.com/problemset/problem/1131/A
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

    long long int w1, w2, h1, h2;
    cin>>w1>>h1>>w2>>h2;
    cout<<(2*(h1+h2))+4+w1+w2+(w1-w2);


}
