//Problem Link: https://codeforces.com/problemset/problem/1236/A
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


long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
        
    int t, a, b, c;
    cin>>t;
    FOR(i, 0, t){
        cin>>a>>b>>c;
        int aa=a, bb=b, cc=c;
        int sum1=0, sum2=0;
        while(aa-1>=0 &&bb-2>=0){
            sum1=sum1+3;
            aa=aa-1;
            bb=bb-2;
        }
        while(bb-1>=0 &&cc-2>=0){
            sum1=sum1+3;
            bb=bb-1;
            cc=cc-2;
        }
        while(b-1>=0 &&c-2>=0){
            sum2=sum2+3;
            b=b-1;
            c=c-2;
        }
        while(a-1>=0 &&b-2>=0){
            sum2=sum2+3;
            a=a-1;
            b=b-2;
        }
        cout<<max(sum1, sum2)<<endl;

    }
}
