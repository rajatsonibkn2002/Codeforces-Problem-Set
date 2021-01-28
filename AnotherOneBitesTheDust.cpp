//Problem Link: https://codeforces.com/problemset/problem/1148/A
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
    
    long long int a, b, c;
    cin>>a>>b>>c;
    if(a==b)
        cout<<2*a+2*c;
    else if(min(a, b)==a)
        cout<<2*a+2*c+1;
    else
        cout<<2*b+2*c+1;

}
