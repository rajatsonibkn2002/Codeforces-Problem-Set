//Problem Link: http://codeforces.com/problemset/problem/236/A
/*
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int ch=0;
    vector<int> dis, check;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        ch=0;
        for(auto& it : check){ 
            if(it==s[i])
                ch=1;
        }
        if(ch==0){
            check.push_back(s[i]);
            dis.push_back(s[i]);
        }
    }
    if(dis.size()%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
}
