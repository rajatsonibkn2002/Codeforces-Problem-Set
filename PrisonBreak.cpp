//Problem Link: https://codeforces.com/problemset/problem/1415/A
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
    
    int t, n, m, r, c, a, b, x, d;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>m>>r>>c;
        a=abs(1-r)+abs(1-c);
        b=abs(1-r)+abs(m-c);
        x=abs(n-r)+abs(1-c);
        d=abs(n-r)+abs(m-c);
        cout<<max(max(max(a, b), x), d)<<endl;
    }
}
