#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int number = 0;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0) {
                number++;
            }
            num /= 10;
        }
    }
    cout << number;
    return 0;
}