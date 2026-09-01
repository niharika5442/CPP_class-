// Exercise 3 — Method
// Add void display() method and use it to display student details.

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    void display() {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Course : " << course << endl;
    }
};

int main() {
    Student s1, s2;

    s1.name = "Niharika";
    s1.age = 20;
    s1.course = "B.Tech Computer Science";

    s2.name = "Rahul";
    s2.age = 21;
    s2.course = "B.Tech Electronics";

    cout << "===== Student 1 Details =====" << endl;
    s1.display();

    cout << "\n===== Student 2 Details =====" << endl;
    s2.display();

    return 0;
}
