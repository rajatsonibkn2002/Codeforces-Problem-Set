//Problem Link: https://codeforces.com/problemset/problem/146/A
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


    int n, firsthalf=0, secondhalf=0, nm;
    string num;
    cin>>n>>num;
    bool lucky=true;
    for(int i=n-1; i>=n/2; i--){
        nm=int(num[i])-48;
        firsthalf+=nm;
        if((nm%10)!=4 && (nm%10)!=7)
            lucky=false;
    }
    for(int i=(n/2)-1; i>=0; i--){
        nm=int(num[i])-48;
        secondhalf+=nm;
        if((nm%10)!=4 && (nm%10)!=7)
            lucky=false;
    }
    if(firsthalf==secondhalf && lucky)
        cout<<"YES";
    else
        cout<<"NO";


}
