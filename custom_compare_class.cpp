#include <bits/stdc++.h>
using namespace std;

// Class definition for Student
class Student
{
public:
    string name;
    int roll;
    int marks;

    // Constructor to initialize Student object
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};

// Functor class cmp for custom comparison in priority_queue
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        // Custom comparison logic based on marks and roll
        if (a.marks > b.marks)
            return true;
        else if (a.marks < b.marks)
            return false;
        else
        {
            // If marks are equal, compare by roll number
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    int n;
    cin >> n;                                         // Input number of students
    priority_queue<Student, vector<Student>, cmp> pq; // Priority queue of Student objects with custom comparator

    // Inputting students into the priority queue
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;   // Input student details
        Student obj(name, roll, marks); // Create Student object
        pq.push(obj);                   // Push Student object into priority queue
    }

    // Outputting students in order of priority
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl; // Output top student details
        pq.pop();                                                                       // Remove top element from priority queue
    }

    return 0;
}
