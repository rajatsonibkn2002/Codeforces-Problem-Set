//Problem Link: https://codeforces.com/problemset/problem/1152/A
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
    
    long long int n, m, an, et=0, ek=0;
    cin>>n>>m;
    FOR(i, 0, n){
        cin>>an;
        if(an%2==0)
            et++;
    }
    FOR(i, 0, m){
        cin>>an;
        if(an%2==0)
            ek++;
    }
    cout<<min(et, m-ek)+min(ek, n-et);

}
