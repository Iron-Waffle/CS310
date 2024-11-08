#include <iostream>

using std::cout;
using std::endl;

template<typename T> void determineMaximum(T &currentMaximum, T candidate) { // Added '&' to properly reference the variable in main so that it updates.
    if (candidate > currentMaximum) {
        currentMaximum = candidate;
    }
}

int main() {
    const int arraySize = 5;
    int currentMaximum = 0;

    int* pArray;
    pArray = new int[arraySize] {1, 3, 5, 7, 9};

    for (int i = 0; i < arraySize; i++) {   // Declared 'i' as an int.
        int candidate = pArray[i];
        determineMaximum<int>(currentMaximum, candidate);
    }

    cout << "The largest number in the array is " << currentMaximum << "." << endl;

    delete[] pArray;
    pArray = nullptr;

    return 0;
}

