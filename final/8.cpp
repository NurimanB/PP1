#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=3;
    vector<int>v;
    for(int i=0; i<3; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());
    for(int i=0; i<3; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
