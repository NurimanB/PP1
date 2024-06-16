#include <iostream>
using namespace std;

int change(string l){
    int n = 0;
    for (int i = 0; i < l.size(); i++) n += l[i];
    return n;
}

int main(){
    string s; cin >> s;
    int check = change(s);

    if (check >= 300){
        cout << "It is tasty!";
    }
    else{
        cout << "Oh, no!";
    }
}