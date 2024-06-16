#include <iostream>
using namespace std;

int main(){
    int a;
    int even = 0;
    int odd = 0;
    cin >> a;
    int b[a];
    for(int i = 0; i < a; i++) {
        cin >> b[i];
        if(b[i]%2==0){
            even = even + 1;
        }else{
            odd = odd + 1;
        }

    }
    cout << even << " " << odd;
    return 0;
}