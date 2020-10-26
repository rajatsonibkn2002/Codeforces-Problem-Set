//Problem Link: http://codeforces.com/problemset/problem/112/A
/*
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++){
        if(tolower(b[i])>tolower(a[i])){
            cout<<-1;
            exit(0);
        }
        else if(tolower(b[i])<tolower(a[i])){
            cout<<1;
            exit(0);
        }
    }
    cout<<0;
}
