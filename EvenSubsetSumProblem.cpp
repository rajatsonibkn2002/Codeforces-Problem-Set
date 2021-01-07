//Problem Link: https://codeforces.com/problemset/problem/1323/A
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

    int t, n, counteven, countodd, an, ce, co;
    cin>>t;
    FOR(i, 0, t){
        counteven=0;
        countodd=0;
        cin>>n;
        int a[n];
        FOR(j, 0, n){
            cin>>a[j];
            if(a[j]%2==0)
                counteven++;
            else
                countodd++;

        }
        ce=counteven;
        co=countodd;
        if(n==1 && counteven==0)
            cout<<-1<<endl;
        else if(n==1 && counteven!=0)
            cout<<1<<endl<<1<<endl;
        else if(counteven>=1){
            cout<<1<<endl;
            for(int j=0; j<n&&counteven>ce-1; j++){
                if(a[j]%2==0){
                    cout<<j+1<<" ";
                    counteven--;
                }
            }
            cout<<endl;
        }
        else if(countodd>=2){
            cout<<2<<endl;
            for(int j=0; j<n&&countodd>co-2; j++){
                if(a[j]%2!=0){
                    cout<<j+1<<" ";
                    countodd--;
                }
            }
            cout<<endl;
        }
        
    }

}
