//Problem Link: https://codeforces.com/problemset/problem/1003/A
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)
#include <vector>



bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    int n, a[100]={0}, an, out=0;
    cin>>n;
    FOR(i, 0, n){
    	cin>>an;
    	a[an-1]++;
    }
    FOR(i, 0, 100){
    	if(a[i]>out)
    		out=a[i];
    }
    cout<<out;
}	
