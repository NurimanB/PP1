// vector 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        if (i != v[i]) {
            cout << i;
            return 0;
        }
    cout << v.size();
    return 0;
}