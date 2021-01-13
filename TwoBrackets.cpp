//Problem Link: https://codeforces.com/problemset/problem/1452/C
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

    int n;
    string ss;
    cin>>n;
    FOR(j, 0, n){
        stack <char> s;
        stack <char> sq;
        cin>>ss;
        int count=0;
        s.push('a');
        sq.push('a');
        FOR(i, 0, ss.length()){
            if(ss[i]=='(')
                s.push('(');
            else if(ss[i]==')' && s.top()=='('){
                s.pop();
                count++;
            }
            else if(ss[i]=='[')
                sq.push('[');
            else if(ss[i]==']' && sq.top()=='['){
                sq.pop();
                count++;
            }
        }
        cout<<count<<endl;
    }
}
