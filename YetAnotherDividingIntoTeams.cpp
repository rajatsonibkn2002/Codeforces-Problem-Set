//Problem Link: https://codeforces.com/problemset/problem/1249/A
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

   int q, n, an, o;
   cin>>q;
   FOR(i, 0, q){
   	o=0;
   	vector <int> v;
   	cin>>n;
   	FOR(j, 0, n){
   		cin>>an;
   		v.push_back(an);
   	}
   	sort(v.begin(), v.end());
   	FOR(j, 0, n-1){
   		if(v[j]==v[j+1]-1)
   			o=1;
   	}
   	if(o==1)
   		cout<<2<<endl;
   	else
   		cout<<1<<endl;
   }
}
