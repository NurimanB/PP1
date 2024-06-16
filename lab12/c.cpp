#include <iostream>
#include <vector>
using namespace std;

bool PowArr(vector<int>& arr) {
    int output = 0;
    for (int number : arr) {
        output ^= number;
    }
    return (output & (output - 1)) == 0;
}

int main() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    if (PowArr(v)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
