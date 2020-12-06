//Problem Link: https://codeforces.com/problemset/problem/32/B
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

    string s;
    cin>>s;
    int i=0, n = s.length();
    while(i<n){
    	if(s[i]=='.')
    		cout<<0;
    	else if(s[i]=='-' && s[i+1]=='.'){
    		cout<<1;
    		i++;
    	}
    	else if(s[i]=='-' && s[i+1]=='-'){
    		cout<<2;
    		i++;
    	}
    	i++;
    }
}
