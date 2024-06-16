#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    if(y==0) return x;
    return gcd(y, x % y);
}

int main() {
    int n, arr[100], biggestgcd=0; cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            biggestgcd = max(biggestgcd, gcd(arr[i], arr[j]));
        }
    }
    cout << biggestgcd;
}
