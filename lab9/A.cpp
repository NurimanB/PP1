#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> first, pair<int, int> second){
    first.second < second.second;
}

int main () {
    int n; cin >> n;
    vector<pair<int, int>> a;
    for(int i=0; i<n; i++) {
        int x, y; cin >> x >> y;
        a.push_back(make_pair(x, y));
    }

    sort(a.begin(), a.end(), cmp);
    for(auto & i: a){
        cout << i.first << ' ' << i.second << endl;
    }
}