//Problem Link: http://codeforces.com/problemset/problem/723/A
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

    int a;
   	vector <int> x;
   	FOR(i, 0, 3){
   		cin>>a;
   		x.push_back(a);
   	}
   	sort(x.begin(), x.end());
   	cout<<(x[1]-x[0])+(x[2]-x[1]);
}


