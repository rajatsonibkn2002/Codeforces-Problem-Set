//Problem Link: http://codeforces.com/problemset/problem/490/A
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
#define FOR(i,a,b)  for(int i=a;i<b;i++)
#include <vector>



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin); 
    freopen("output","w",stdout);
    #endif

    int n, n1=0, n2=0, n3=0, tn;
    vector <int> t, a1, a2, a3;
    cin>>n;
    FOR(i, 0, n){
    	cin>>tn;
    	t.push_back(tn);
    	if(tn==1){
    		n1++;
    		a1.push_back(i+1);
    	}
    	else if(tn==2){
    		n2++;
    		a2.push_back(i+1);
    	}
    	else{
    		n3++;
    		a3.push_back(i+1);
    	}		
    }
    n2 = min(n1, n2);
    n2 = min(n2, n3);
    cout<<n2<<endl;
    FOR(i, 0, n2){
    	cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }
}


