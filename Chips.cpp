//Problem Link: https://codeforces.com/problemset/problem/92/A
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
    
    long long int n, m;
    cin>>n>>m;
    long long int a[n]={0};
    bool stop=false;
    while(!stop){
        for(int i=0; i<n && !stop; i++){
            if(i+1<=m){
                a[i]=a[i]+i+1;
                m=m-(i+1);
            }
            else
                stop=true;
        }

    }
    cout<<m;

}
