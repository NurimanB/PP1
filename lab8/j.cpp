#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    int diff = a[n-1] - a[0];
    cout << diff;
}