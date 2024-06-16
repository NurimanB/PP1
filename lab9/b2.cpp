#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>even, odd;
    for(int i=1; i<=n; i++){
        int x; cin >> x;
        if( i%2==0) even.push_back(x);
        else odd.push_back(x);
    }

    sort(even.rbegin(), even.rend());
    sort(odd.begin(), odd.end());
    for(auto & i: even) {
        cout << i << ' ';
    }
    for(auto & i: odd) {
        cout << i << ' ';
    }
}