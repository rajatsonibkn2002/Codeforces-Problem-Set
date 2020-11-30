//Problem Link: https://codeforces.com/problemset/problem/822/A
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

unsigned long long int factorial(long long int n) 
{ 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    unsigned long long int a, b;
    cin>>a>>b;
    cout<<factorial(min(a, b));
}





