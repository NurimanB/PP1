#include <iostream>  
using namespace std;  
int main (){
    int n, k = 0, i, b;
    cin >> n;
    while (i  < n){  
    k += 1;  
    i = k*k;  
    if (i<=n){  
      cout << i << endl;  
    }  
  }   
  return 0;  
  }