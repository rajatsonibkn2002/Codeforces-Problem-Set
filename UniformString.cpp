//Problem Link: https://codeforces.com/problemset/problem/1092/A
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
    
    int t, n, k;
    cin>>t;
    FOR(i, 0, t){
        cin>>n>>k;
        FOR(i, 0, k){
            FOR(j, 0, n/k){
                cout<<char(i+97);
            }
        }
        FOR(i, 0, n-((n/k)*k)){
            cout<<char(k+96);
        }
        cout<<endl;

    }
        

}
