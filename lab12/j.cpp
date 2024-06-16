#include <bits/stdc++.h>
using namespace std;

const long long mx = 10e5;
int main(){
    int n; cin>>n;
    int d[n];
    map<int, bool>mp;
    bool in[mx] = {false};
    for(int i=0; i<n; i++){
        cin>>d[i]; 
        for(int j=0; j<i; j++) mp[d[i]+d[j]]=true;
    }
    int m; cin>>m;
    int sum=0;
    for(int i=0; i<m; i++){
        cin>>sum;
        if(mp[sum]) { 
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    
}
