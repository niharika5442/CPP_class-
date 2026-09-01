// Exercise 4 — Constructor
// Create Student(string name, int age, string course) parameterized constructor.

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    // Parameterized Constructor
    Student(string name, int age, string course) {
        this->name = name;
        this->age = age;
        this->course = course;
    }

    void display() {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Course : " << course << endl;
    }
};

int main() {
    // Initializing objects using parameterized constructor
    Student s1("Niharika", 20, "B.Tech Computer Science");
    Student s2("Rahul", 21, "B.Tech Electronics");
    Student s3("Priya", 19, "BCA");

    cout << "===== Student 1 =====" << endl;
    s1.display();

    cout << "\n===== Student 2 =====" << endl;
    s2.display();

    cout << "\n===== Student 3 =====" << endl;
    s3.display();

    return 0;
}
