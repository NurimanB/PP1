#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s; int sum=0; cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(isdigit(s[i])) sum += s[i]-'0';
    }
    cout << sum;
    return 0;
}