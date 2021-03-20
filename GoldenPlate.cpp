//Problem Link: https://codeforces.com/problemset/problem/1031/A
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

    int w, h, k, sum=0;
    cin>>w>>h>>k;
    while(k>0){
        sum+=(2*w)+(2*h)-4;
        w-=4;
        h-=4;
        k--;
    }
    cout<<sum;

}
