//This program gets three numbers from the user, finds the largest of the three numbers, and prints the result.

#include <iostream>
using namespace std;

int findLargest(int a, int b, int c) // Removed the semicolon since function definitions are not statements.
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c) // updated this to allow the condition to work by making this an "else if" statement. The program is also now executable.
        return b;
    else
        return c;
}
int main()
{

    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int largest = findLargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;

    cout << "\nPress any key to continue..." << endl; // Added a closing message for non-visual studio IDEs.


    return 0;
}