#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int root = sqrt(n);

    if(root * root == n) cout << "Perfecto";
    else cout << "Simple";
    return 0;
}