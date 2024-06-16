#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x;
    vector<int>v;
    while(cin >> x) {
        v.push_back(x);
    }

    cout << v.size();
}