#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // Allocates memory for pointer with "new int."
    int num = 10;

    *ptr = num;

    cout << "The value of num is: " << *ptr << endl;

    int* numPtr = &num;
    cout << "The address of num is: " << numPtr << endl; // Added semicolon to complete statement.

    delete ptr; // Added this line to free allocated memory.

    cout << "\nPress any key to continue..." << endl; // Closing message for non-Visual Studio IDEs.

    return 0;

}