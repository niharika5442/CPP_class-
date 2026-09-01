// Exercise 5 — Employee
// Create an Employee class with id, name, salary, department.
// Use a parameterized constructor and a display() method.

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;
    string department;

    // Parameterized Constructor
    Employee(int id, string name, double salary, string department) {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void display() {
        cout << "Employee ID  : " << id << endl;
        cout << "Name         : " << name << endl;
        cout << "Salary       : Rs. " << salary << endl;
        cout << "Department   : " << department << endl;
    }
};

int main() {
    Employee e1(101, "Niharika", 55000.00, "Software Development");
    Employee e2(102, "Rahul", 48000.50, "Human Resources");
    Employee e3(103, "Priya", 62000.75, "Data Analytics");

    cout << "===== Employee 1 =====" << endl;
    e1.display();

    cout << "\n===== Employee 2 =====" << endl;
    e2.display();

    cout << "\n===== Employee 3 =====" << endl;
    e3.display();

    return 0;
}
