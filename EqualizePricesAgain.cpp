//Problem Link: https://codeforces.com/problemset/problem/1234/A
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



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    long long t, sum, n, a;
    cin>>t;
    FOR(i, 0, t){
    	sum=0;
    	cin>>n;
    	FOR(j, 0, n){
    		cin>>a;
    		sum=sum+a;
    	}
    	if(sum%n==0)
    		cout<<sum/n<<endl;
    	else
    		cout<<(sum/n) +1<<endl;
    }
    
}





