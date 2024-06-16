#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    map<string, int>mp;
    vector<int>v;
    for(int i=0; i<n; i++) {
        string x; cin >> x;
        mp[x] = mp[x] + 1;
        if(mp[x]>1) v.push_back(1);
        else v.push_back(0);
    }

    for(auto & i: v) {
        if(!i) cout << "new user added" << "\n";
        else cout << "user already exists" << "\n";
    }
}