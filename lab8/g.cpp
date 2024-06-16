#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n==0, n==1) 
        return false;
    else 
        for(int i=2; i<=sqrt(n); i++)
            if(n%i==0) 
                return false;
    return true;
}

int main() {
    int n, count = 0; cin >> n;
    vector<int>a;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        a.push_back(x);
    } 

    int l; cin >> l;
    for(int i=0; i<a.size(); i++){
        if(a[i]>l and isPrime(a[i])) 
            count++;

    }
    cout << count;
}