#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, mx=0; cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++ ){ 
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            mx = max(arr[i][j], mx);
        }
    }
    int mx2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != mx){mx2 = max(mx2, arr[i][j]);}
        }
    }
    cout << mx2;

}