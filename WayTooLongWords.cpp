//Problem Link: http://codeforces.com/problemset/problem/71/A
/*
  Author: Rajat Soni
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s.length()<=10)
            cout<<s<<"\n";
        else
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<"\n";
    }
}
