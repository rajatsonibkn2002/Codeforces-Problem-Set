//Problem Link: https://codeforces.com/problemset/problem/1207/A
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

    int t, b, p, f, h, c, n;
    cin>>t;
    FOR(i, 0, t){
    	cin>>b>>p>>f>>h>>c;
    	n=b/2;
    	if(c>=h){
    		cout<<min(n, f)*c + min((n-min(n, f)), p)*h<<endl;
    	}
    	else{
    		cout<<min(n, p)*h + min((n-min(n, p)), f)*c<<endl;
    	}
    }

}	
