#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, m, cnt=0; cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++ ){ 
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++ ){ 
        for(int j=0; j<m; j++){
            if(arr[i][j] < 0) { cnt++;}
        }
    }
    cout << cnt;

}