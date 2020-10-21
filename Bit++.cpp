//Problem Link: http://codeforces.com/problemset/problem/282/A
/*
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x=0;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s[0]==43|| s[2]==43)
            x++;
        else
            x--;
    }
    cout<<x;
}
