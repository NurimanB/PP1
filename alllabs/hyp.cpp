#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    double hyp = sqrt(x * x + y * y);
    cout << scientific << setprecision(3) << hyp;

    return 0;
}
