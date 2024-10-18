#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int studentID;

    Student(string n, int a, int id) : Person(n, a), studentID(id) {} // Adjusted this constructor to correctly reference the person constructor above.
                                                                     // Changed from Person(Name, age) to Person(n, a) to match the above.

    void displayStudentInfo() {
        cout << "Student ID: " << studentID << ", Name: " << name << ", Age: " << age << endl; // Added the missing semicolon at the end of this cout statement.
    }
};

int main() {
    Student s1("Alice", 20, 12345);

    s1.displayStudentInfo();

    return 0;
}
