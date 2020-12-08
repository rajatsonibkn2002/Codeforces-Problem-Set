//Problem Link: https://codeforces.com/problemset/problem/1393/A
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

    long long int t, n;
    cin>>t;
    FOR(i, 0, t){
    	cin>>n;
    	if(n%2==0)
    		cout<<2+((n-2)/2)<<endl;
    	else
    		cout<<1+((n-1)/2)<<endl;
    }

}	
