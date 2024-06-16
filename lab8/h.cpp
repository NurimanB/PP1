#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }

    int l; cin >> l;
    sort(a.begin(), a.end());
    for(int i=0; i<l; i++){
        cout << a[i] << " ";
    }
}