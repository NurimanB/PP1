#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upcnt = 0, lowcnt = 0;

    for(int i=0; i<s.size(); i++) {
        if(isupper(s[i])) upcnt++;
        else if(islower(s[i])) lowcnt++;
    }

    cout << lowcnt << ' ' << upcnt;
    return 0;
}