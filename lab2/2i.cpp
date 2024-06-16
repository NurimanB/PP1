#include <iostream>
using namespace std;

int main(){
    int a;
    int num = 0;
    cin >> a;
    int b[a];
    for(int i = 0; i < a; i++) {
        cin >> b[i];
        if(b[i]%10==7) {
            num++;
        }
    }
    cout << num;
    return 0;
}