//Problem Link: https://codeforces.com/problemset/problem/1200/A
/*
  Author: Rajat Soni
/*

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

    int n, rooms[10]={0}, end;
    string s;
    cin>>n>>s;
    FOR(i, 0, n){
        end=0;
        if(s[i]=='L'){
            for(int j=0; j<10&&end==0; j++){
                if(rooms[j]==0){
                    rooms[j]++;
                    end=1;
                }
            }
        }
        else if(s[i]=='R'){
            for(int j=9; j>=0&&end==0; j--){
                if(rooms[j]==0){
                    rooms[j]++;
                    end=1;
                }
            }
        }
        else{
            rooms[int(s[i])-48]--;
        }
    }
    FOR(i, 0, 10){
        cout<<rooms[i];
    }
    cout<<endl;

}
