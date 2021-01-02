//Problem Link: https://codeforces.com/problemset/problem/378/A
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

    int a, b, aw=0, draw=0, bw=0;
    cin>>a>>b;
    FOR(i, 1, 7){
        if(abs(a-i)>abs(b-i))
            bw++;
        else if(abs(a-i)<abs(b-i))
            aw++;
        else
            draw++;
    }
    cout<<aw<<" "<<draw<<" "<<bw;
}
