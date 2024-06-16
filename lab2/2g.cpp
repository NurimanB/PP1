#include <iostream>
using namespace std;

int main() {
    int a;
    int maximum = 0;
    cin >> a;
    int b [a];  
    for (int i = 0; i < a; i++) {
        int num;
        cin >> num;
        b[i] = num;
        if ( b [i]> maximum){
            maximum = b [i];
        }
     
     
}
    cout << maximum <<endl;
    return 0;
}