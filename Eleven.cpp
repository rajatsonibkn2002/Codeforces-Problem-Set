//Problem Link: https://codeforces.com/problemset/problem/918/A
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
    cin>>n;
    for(int i=1; i<=n; i++){
        bool ischeck=true;
        if(i==1 || i==2)
            cout<<"O";
        else{
            int a=1, b=1, sum;
            sum=a+b;
            a=b;
            b=sum;
            while(ischeck){
                if(sum>i){
                    cout<<'o';
                    ischeck=false;
                }
                else if(sum==i){
                    cout<<'O';
                    ischeck=false;
                }
                sum=a+b;
                a=b;
                b=sum;
            }
        }
             
    }

}
