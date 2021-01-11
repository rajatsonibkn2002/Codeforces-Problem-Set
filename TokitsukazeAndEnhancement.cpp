//Problem Link: https://codeforces.com/problemset/problem/1191/A
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

    int x;
    cin>>x;
    if(x%4==1)
        cout<<0<<" "<<"A";
    else if((x+1)%4==1)
        cout<<1<<" "<<"A";
    else if((x+2)%4==1)
        cout<<2<<" "<<"A";
    else if(x%4==3)
        cout<<0<<" "<<"B";
    else if((x+1)%4==3)
        cout<<1<<" "<<"B";
    else if((x+2)%4==3)
        cout<<2<<" "<<"B";
    else if(x%4==2)
        cout<<0<<" "<<"C";
    else if((x+1)%4==2)
        cout<<1<<" "<<"C";
    else if((x+2)%4==2)
        cout<<2<<" "<<"C";
    else if(x%4==0)
        cout<<0<<" "<<"D";
    else if((x+1)%4==0)
        cout<<1<<" "<<"D";
    else if((x+2)%4==0)
        cout<<2<<" "<<"D";
}
