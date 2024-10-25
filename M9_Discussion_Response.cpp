#include <iostream>

using namespace std;

class Vehicle {
private:
    int wheels;
    string name;

public:
    Vehicle(int w, string n) : wheels(w), name(n) {}

    void displayInfo() {
        cout << "This is a " << name << " with " << wheels << " wheels." << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike() : Vehicle(2, "Bike") {}
    void makeSound() {
        cout << "Ding!" << endl;
    }
};

class Car : public Vehicle {
public:                            // Changed this constructor from "private" to "public."
    Car() : Vehicle(4, "Car") {}
    void makeSound() {
        cout << "Honk!" << endl;
    }
};

int main() {
    Car c;                         // Removed parenthese make this line work.
    c.makeSound(); 
    c.displayInfo();               // Allows the output statement in line 14 to display.

    Bike b;          
    b.makeSound();
    b.displayInfo(); 


    return 0;                      // Exits code.
}