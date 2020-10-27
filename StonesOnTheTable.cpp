//Problem Link: http://codeforces.com/problemset/problem/266/A
/*
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1])
            count++;
    }
    cout<<count;
}
