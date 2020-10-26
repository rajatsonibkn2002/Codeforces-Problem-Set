//Problem Link: http://codeforces.com/problemset/problem/339/A
/*
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int count=1;
    vector<int> arr; 
    cin>>a;
    for(int i=0; i<a.length(); i++){
        if(a[i]!=43)
            arr.push_back(a[i]);
    }
    sort(arr.begin(), arr.end()); 
    for (auto& it : arr) {
        if(count<a.length()){
            cout<<char(it)<< '+'; 
            count=count + 2;
        }
        else
            cout<<char(it); 
    }
}
