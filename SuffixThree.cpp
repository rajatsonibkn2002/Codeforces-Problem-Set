//Problem Link: https://codeforces.com/problemset/problem/1281/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
// typedef long l;
// typedef long long ll;
typedef vector<int> vi;
// typedef vector<char> vc;
typedef std::vector<int>::iterator Auto;
// #define PB push_back
#define FOR(i,a,b)  for(long long int i=a;i<b;i++)
#include <vector>


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif

    int t;
    string s;
    cin>>t;
    FOR(i, 0, t){
        cin>>s;
        if(s[s.length()-1]=='o'&&s[s.length()-2]=='p')
            cout<<"FILIPINO"<<endl;
        else if(s[s.length()-1]=='a'&&s[s.length()-2]=='d'&&s[s.length()-3]=='i'&&s[s.length()-4]=='n'&&s[s.length()-5]=='m')
            cout<<"KOREAN"<<endl;
        else
           cout<<"JAPANESE"<<endl; 
    }
}
