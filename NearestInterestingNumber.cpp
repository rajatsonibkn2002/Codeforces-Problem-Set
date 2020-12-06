//Problem Link: https://codeforces.com/problemset/problem/1183/A
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

    int a, c, sum=1;
    cin>>a;
    while(sum%4!=0){
    	sum=0;
    	c=a;
    	while(c!=0){
    		sum = sum+(c%10);
    		c=c/10;
    	}
    	a++;
    }
    cout<<--a;
}	
