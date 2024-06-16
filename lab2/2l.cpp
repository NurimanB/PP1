#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int power = 1;
    while (power <= n) {
        cout << power;
        if (power * 2 <= n) {
            cout << ' ';
        }
        power *= 2;
    }
    cout << endl;
    return 0;
}