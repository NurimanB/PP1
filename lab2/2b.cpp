#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x%2==1){
        cout << "Super";
    } else if (x%2==0 and x >=2 and x<=5){
        cout << "Not Super";
    } if (x%2==0 and x>=6 and x<=20){
        cout << "Super";
    } else if (x%2==0 and x>20){
        cout << "Not Super";
    }
    return 0;
}