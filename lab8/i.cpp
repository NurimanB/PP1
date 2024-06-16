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

    int l; cin >> l;
    for(int i=0; i<a.size(); i++) {
        if(a[i] == l) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}