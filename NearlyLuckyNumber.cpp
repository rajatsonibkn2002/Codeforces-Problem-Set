//Problem Link: http://codeforces.com/problemset/problem/110/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    unsigned long long int n, count=0;
    cin>>n;
    while(n!=0){
        if(n%10==4 || n%10==7)
            count++;
        n = n/10;
    }

    if(count==4 || count==7)
        cout<<"YES";
    else
        cout<<"NO";
}


