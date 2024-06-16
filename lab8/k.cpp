#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; int sum = 0; cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }

    int l; cin >> l;
    sort(a.begin(), a.end(), greater<int>());
    for(int i=0; i<l; i++) {
        sum += a[i];
    }
    cout << sum;
}   