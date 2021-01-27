//Problem Link: https://codeforces.com/problemset/problem/609/A
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
    
    int n, m, count=0;
    cin>>n>>m;
    int a[n];
    FOR(i, 0, n)
        cin>>a[i];
    sort(a, a+n);
    int i=n-1;
    while(m>0){
        m=m-a[i];
        i--;
        count++;
    }
    cout<<count;    

}
