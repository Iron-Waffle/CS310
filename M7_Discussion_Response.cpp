//This program displays a two dimensional array with 2 rows and 3 columns.

#include <iostream>
using namespace std;

int main() {
    const int rows = 2, cols = 3;
    int array[rows][cols] = {{ 1, 1, 1 }, { 2, 2, 2 } // Added double braces to allow for initialization of row of the array.
};

    // Display 2D Array
    cout << "2 Dimensional Array Elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << array[i][j] << " "; // Swapped the row and column index to allow for correct iteration.
        cout << endl;
    }

    return 0;
}