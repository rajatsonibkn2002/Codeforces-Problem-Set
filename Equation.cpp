//Problem Link: https://codeforces.com/problemset/problem/1269/A
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

int iscomposite(long long int n){
    long long int i,f=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    if(f==1)
        return 0;
    else
        return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
    long long int n;
    cin>>n;
    FOR(i, 2, 1000000001){
        if(iscomposite(i)){
            if(iscomposite(i+n)){
                cout<<i+n<<" "<<i;
                exit(0);
            }
        }
    }
    
}
