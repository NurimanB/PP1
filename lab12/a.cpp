#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>v;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }

    int l; cin >> l;

    auto it = min_element(v.begin(), v.end(), [l](int x, int y) {
        return abs(x - l) < abs(y - l);
    });

    int nearestIndex = distance(v.begin(), it);

    cout << nearestIndex << endl;

    return 0;
}
