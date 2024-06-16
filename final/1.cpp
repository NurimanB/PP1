#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int k, m; cin >> k >> m;
    vector<int>v;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    reverse(v.begin()+k-1, v.end() - (n - m));
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << ' ';
    }
    return 0;

}