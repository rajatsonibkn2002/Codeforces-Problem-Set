//Problem Link: http://codeforces.com/problemset/problem/617/A
/* 
  Author: Rajat Soni
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, complete=0, ele=0, count=0;
    cin>>x;
    while(complete!=1){
        if(ele+5<=x)
            ele = ele+5;
        else if(ele+4<=x)
            ele = ele+4;
        else if(ele+3<=x)
            ele = ele+3;
        else if(ele+2<=x)
            ele = ele+2;
        else if(ele+1<=x)
            ele = ele+1;
        count++;
        if(ele==x)
            complete=1;
    }
    cout<<count;
}
