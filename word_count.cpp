// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string sentence;
//     getline(cin, sentence);
//     string word;
//     stringstream ss(sentence);
//     map<string, int> mp;
//     while (ss >> word)
//     {
//         mp[word]++;
//     }
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//         cout << it->first << " " << it->second << endl;
//     }
//     cout << mp["She"] << endl;
//     return 0;
// } 

#include <bits/stdc++.h>
using namespace std;
int main() {
    string sentence;
    getline(cin, sentence);  // reads a full line/sentence of input from the user

    string word;
    stringstream ss(sentence);  // stringstream to split the sentence into words

    map<string, int> mp;  // map to store words and their frequencies

    // Loop through each word in the stringstream
    while (ss >> word) {
        mp[word]++;  // increment the frequency of the current word
    }

    // Output each word and its frequency from the map
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;  // print word and frequency
    }

    // Output the frequency of the word "She". If "She" is not found in mp, it will output 0 because accessing a non-existing key in a map returns 0.
    cout << mp["She"] << endl;

    return 0;
}
