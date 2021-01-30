//Problem Link: https://codeforces.com/problemset/problem/688/A
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


bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2;i<=sqrt(num);i++){
        if(num % i == 0) return false;
    }
    return true;
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
    
    int n, d, max=0, count=0;
    cin>>n>>d;
    string s;
    FOR(i, 0, d){
        bool win=false;
        cin>>s;
        FOR(j, 0, n){
            if(s[j]=='0')
                win=true;
        }
        if(win==true)
            count++;
        else{
            if(count>max)
                max=count;
            count=0;
        }
    }
    if(count>max)
        max=count;
    cout<<max;

}
