#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, l; cin >> n >> l;
    vector<int>v;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    rotate(v.begin(), v.begin()+l, v.end());
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}