//Problem Link: https://codeforces.com/problemset/problem/1428/A
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
        
        long long int t, x1, x2, y1, y2;
        cin>>t;
        FOR(i, 0, t){
            cin>>x1>>y1>>x2>>y2;
            if(x1==x2 || y1==y2)
                cout<<abs(x1-x2)+abs(y1-y2)<<endl;
            else
                cout<<abs(x1-x2)+2+abs(y1-y2)<<endl;
        }
    }
