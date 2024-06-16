#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    set<int>st;
    char e = s[0];
    int cnt = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == e){
            cnt++;
        }
        else{
            e = s[i];
            st.insert(cnt);
            cnt = 1;
        }
    }
    if(st.size() == 1){cout << "YES";}
    else{ cout << "NO";}

}