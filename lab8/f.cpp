#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }

    int l, k; cin >> l >> k;
    a.insert(a.begin()+l, k);
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
}