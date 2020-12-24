//Problem Link: https://codeforces.com/problemset/problem/1422/A
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
#define FOR(i,a,b)  for(unsigned long long int i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 		
    freopen("output","w",stdout);
    #endif

    long long int t, a, b, c, d, maxx, sum;
    cin>>t;
    FOR(i, 0, t){
        cin>>a>>b>>c;
        maxx = max(max(a, b), c);
        if(maxx>(a+b+c)/2)
            d=maxx-1;
        else
            d=((a+b+c)/2)+1;
        cout<<d<<endl;
    }
}
