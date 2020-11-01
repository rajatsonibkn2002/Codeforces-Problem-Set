//Problem Link: http://codeforces.com/problemset/problem/271/A
*/
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)


int isDistinct(int n){
    vector<int> a;
    while(n!=0){
        a.push_back(n%10);
        n=n/10;
    }
    sort(a.begin(), a.end());
    for (auto it = a.begin(); it != a.end()-1; it++) {
        if(*it==*(it+1))
            return 0;
    }
    return 1;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int y;
    cin>>y;

   while(1){
        y++;
        if(isDistinct(y)){
            cout<<y;
            exit(0);
        }
    }
}


