/*#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, sum=0; cin >> n;
    set<int>s;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        s.insert(x);
    }

    set<int>::iterator it = s.begin();
    while (it != s.end()) {
        sum += *it;
        ++it;
    }
    cout << sum;
    return 0;
}*/
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        // Check if the element is already in the set
        auto result = s.insert(x);

        // If the insertion is successful (the element is unique)
        if (result.second) {
            sum += x;
        }
    }

    cout << sum;
    return 0;
}



