#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration of priority_queue with elements of type int, using vector<int> as the underlying container,
    // and with greater<int> as the comparison function to maintain a min-heap.
    priority_queue<int, vector<int>, greater<int>> pq;

    while (true)
    {
        int c;
        cin >> c; // Input operation type: 0 (push), 1 (pop), 2 (top), other (end loop)

        if (c == 0)
        {
            int x;
            cin >> x;   // Input the value to push into the priority queue
            pq.push(x); // Inserts x into the priority queue (O(logN) complexity for insertion)
        }
        else if (c == 1)
        {
            pq.pop(); // Removes the top element from the priority queue (O(logN) complexity for deletion)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // Outputs the top element of the priority queue (O(1) complexity for access)
        }
        else
        {
            break; // Exit the loop if input is not 0, 1, or 2
        }
    }

    return 0;
}
