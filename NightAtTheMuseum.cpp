//Problem Link: https://codeforces.com/problemset/problem/731/A
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



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int sum=0;
    string s;
    cin>>s;
    s="a"+s;
    FOR(i, 1, s.length()){
    	sum = sum + min(min(abs(s[i]-s[i-1]), s[i-1]-s[i]+26), s[i]-s[i-1]+26);
    }
    cout<<sum;
}





