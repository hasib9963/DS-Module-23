#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    int n;
    cin >> n;  // Input the number of elements to insert into the set
    while (n--) {
        int x;
        cin >> x;  // Input each element to insert into the set
        s.insert(x);  // Inserts element x into the set (O(logN) complexity for insertion)
    }

    cout << s.count(100) << endl;  // Outputs the number of occurrences of 100 in the set (O(logN))
    
    if (s.count(1000)) {
        cout << "YES" << endl;  // Checks if 1000 exists in the set and prints "YES" if true
    } else {
        cout << "NO" << endl;   // Prints "NO" if 1000 does not exist in the set
    }

    // print all elements in the set
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;  // Outputs each element in the set in sorted order
    }

    return 0;
}
