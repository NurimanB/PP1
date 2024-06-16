#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, sum=0; cin >> n;
    set<int>s;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        s.insert(x);
    }

    for(auto & i: s){
        sum += i;
    }
    cout << sum;
}