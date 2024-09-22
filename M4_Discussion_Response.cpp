#include <iostream>

using namespace std;

int main() {

    // Declaring variables
    int years = 0;
    int townPopulation_A, townPopulation_B;
    double townGrowth_A, townGrowth_B;

    //Requesting user input
    cout << "Please enter the population of Town A:  ";
    cin >> townPopulation_A;
    cout << endl;
    cout << "Please enter the rate of growth for Town A:  ";
    cin >> townGrowth_A;
    cout << endl;

    cout << "Please enter the population of Town B:  ";
    cin >> townPopulation_B;
    cout << endl;
    cout << "Please enter the rate of growth for Town B:  ";
    cin >> townGrowth_B;
    cout << endl;

    //The while loop for calculating years until town a surpasses Town b
    while (townPopulation_A < townPopulation_B) // added curly brackets ensure the loop fully goes through each statement until the expression is true.
    {
        cout << "Year -  << years " << "   Town A - " << townPopulation_A;
        cout << "   Town B - " << townPopulation_B << endl;

        townPopulation_A = townPopulation_A + (townPopulation_A * (townGrowth_A / 100));
        townPopulation_B = townPopulation_B + (townPopulation_B * (townGrowth_B / 100));

        years++;
    }

    cout << "\nTown A's population will surpass town B in " << years << "years. " << endl; // Added a newline break here to help with output readability.

    return 0; // Added a semicolon to fix the syntax error, and complete the statement properly.


}