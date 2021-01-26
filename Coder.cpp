//Problem Link: https://codeforces.com/problemset/problem/384/A
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


bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2;i<=sqrt(num);i++){
        if(num % i == 0) return false;
    }
    return true;
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);         
    freopen("output","w",stdout);
    #endif
    
    int n;
    cin>>n;
    if(n%2==0)
        cout<<(n/2)*n<<endl;
    else
        cout<<((n-(n/2))*((n/2)+1))+((n/2)*(n/2))<<endl;
    bool print;
    FOR(i, 0, n){
        if(i%2==0)
            print=true;
        else
            print=false;
        FOR(j, 0, n){
            if(print){
                cout<<'C';
                print=false;
            }
            else{
                cout<<'.';
                print=true;
            }
        }
        cout<<endl;
    }
        

}
