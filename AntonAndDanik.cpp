//Problem Link: http://codeforces.com/problemset/problem/734/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)  for(int i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

   int n, anton=0, danik=0;
   string s;
   cin>>n>>s;
   FOR(i, 0, n){
        if(s[i]==65)
            anton++;
        else
            danik++;
   }
   if(anton>danik)
        cout<<"Anton";
    else if(anton<danik)
        cout<<"Danik";
    else
        cout<<"Friendship";
}


