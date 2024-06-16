#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int m; cin >> m;
    for(int i=0; i<m; i++) {
        cout << v[i] << ' ';
    }
    return 0;
}