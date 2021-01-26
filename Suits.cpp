//Problem Link: https://codeforces.com/problemset/problem/1271/A
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


bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2;i<=sqrt(num);i++){
        if(num % i == 0) return false;
    }
    return true;
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
    
    int a, b, c, d, e, f;
    cin>>a>>b>>c>>d>>e>>f;
    if(e>=f){
        int aa=min(a, d);
        d=d-aa;
        int bb=min(min(b, c), d);
        cout<<e*aa+f*bb;
    }
    else{
        int aa=min(min(b, c), d);
        d=d-aa;
        int bb=min(d, a);
        cout<<f*aa+e*bb;
    }
}
