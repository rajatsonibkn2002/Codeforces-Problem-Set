//Problem Link: http://codeforces.com/problemset/problem/158/A
/*
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, count=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
        if(a[i]>=a[k-1] && a[i]>0)
            count++;
        else
            break;
    }
    cout<<count;
}
