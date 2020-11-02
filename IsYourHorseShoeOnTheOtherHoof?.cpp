//Problem Link: https://codeforces.com/problemset/problem/228/A
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


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int s1, s2, s3, s4, count=0;
    cin>>s1>>s2>>s3>>s4;
    vector<int> a={s1, s2, s3, s4};
    sort(a.begin(), a.end());
    for(auto it=a.begin(); it!=a.end()-1; it++){
    	if(*it==*(it+1))
    		count++;
    }
    cout<<count;
}


