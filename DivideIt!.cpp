//Problem Link: https://codeforces.com/problemset/problem/1176/A
/*
  Author: Rajat Soni

#include<bits/stdc++.h>
using namespace std;
// typedef long l;
// typedef long long ll;
typedef vector<int> vi;
// typedef vector<char> vc;
typedef std::vector<int>::iterator Auto;
// #define PB push_back
#define FOR(i,a,b)  for(unsigned long long int i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    unsigned long long int q, n;
    cin>>q;
    FOR(i, 0, q){
    	cin>>n;
    	unsigned long long int nn=0, count=0;
    	while(n!=1 && nn==0){
    		if(n%2==0)
    			n=n/2;
    		else if(n%3==0)
    			n=2*(n/3);
    		else if(n%5==0)
    			n=4*(n/5);
    		else{
    			nn=1;
    			count--;
    		}
    		count++;
    	}
    	if(nn==1)
    		cout<<-1<<endl;
    	else
    		cout<<count<<endl;
    }
}
