#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a.push_back(x);
    }

    reverse(a.begin(), a.end());
    for (int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
    return 0;
}