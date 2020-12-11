//Problem Link: https://codeforces.com/problemset/problem/1206/A
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

  	int n, m, num;
  	vector <int> an, am;
  	cin>>n;
  	FOR(i, 0, n){
  		cin>>num;
  		an.push_back(num);
  	}
  	cin>>m;
  	FOR(i, 0, m){
  		cin>>num;
  		am.push_back(num);
  	}
  	sort(an.begin(), an.end());
  	sort(am.begin(), am.end());
  	cout<<an[n-1]<<" "<<am[m-1];
}
