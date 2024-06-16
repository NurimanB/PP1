#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    string hexa = "";
    while (n > 0) {
        int remnant = n % 16;
        if (remnant < 10) hexa = char(remnant + '0') + hexa;
        else hexa = char(remnant - 10 + 'A') + hexa;
        n /= 16;
    }
    cout << hexa << endl;
    return 0;
}
