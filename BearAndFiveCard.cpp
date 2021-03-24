//Problem Link: https://codeforces.com/problemset/problem/680/A
/*
  Author: Rajat Soni
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;

#define PB push_back
#define MP make_pair

#define FOR(i,a,b)  for(int i=a;i<b;i++)



int main()
{
    #ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t1, t2, t3, t4, t5;
    cin>>t1>>t2>>t3>>t4>>t5;
    int sum=t1+t2+t3+t4+t5, summ=600;
    map <int, int> m;
    m[t1]++;
    m[t2]++;
    m[t3]++;
    m[t4]++;
    m[t5]++;
    for(auto &it:m){
        if(it.second>=3){
            summ= min(summ, sum-(3*it.first));
        }
        else if(it.second>=2)
            summ= min(summ, sum-(2*it.first));
        // cout<<it.first<<" "<<it.second<<endl;
    }
    if(summ!=600)
        cout<<summ;
    else
        cout<<sum;

}
