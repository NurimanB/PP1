#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = n;
    int sum = 0;
    int lastDigit = num % 10;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    if (sum % lastDigit == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
