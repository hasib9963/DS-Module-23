#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    // Inserting elements into the map
    mp["Sakib al hasn"] = 79; // Inserts "Sakib al hasn" with value 79
    mp.insert({"akib", 100}); // Inserts "akib" with value 100
    mp.insert({"akib", 150}); // Attempts to insert "akib" again with value 150 (updates existing value)
    mp["tamim"] = 79;         // Inserts "tamim" with value 79

    // Printing all elements in the map
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // Outputs each key-value pair in the map
    }
    
    // Counting occurrences of a key
    cout << mp.count("akib") << endl; // Outputs the number of occurrences of "akib" (expected: 1)
    return 0;
}
