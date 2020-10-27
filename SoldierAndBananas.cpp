//Problem Link: http://codeforces.com/problemset/problem/546/A
/* 
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, w, n, amount;
    cin>>k>>n>>w;
    amount = k*w*(w+1)/2;
    if(n<amount)
        cout<<amount-n;
    else
        cout<<0;
}
