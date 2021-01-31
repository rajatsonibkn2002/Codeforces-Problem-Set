//Problem Link: https://codeforces.com/problemset/problem/454/A
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
    
    int n;
    cin>>n;
    for(int i=n/2; i>=1; i--){
        FOR(j, 0, i)
            cout<<'*';
        FOR(j, 0, n-(2*i))
            cout<<'D';
        FOR(j, 0, i)
            cout<<'*';
        cout<<endl;  
    }
    FOR(i, 0, n)
        cout<<'D';
    cout<<endl;
    for(int i=1; i<=n/2; i++){
        FOR(j, 0, i)
            cout<<'*';
        FOR(j, 0, n-(2*i))
            cout<<'D';
        FOR(j, 0, i)
            cout<<'*';
        cout<<endl;  
    }

}
