/*
    Student Name: Boris Davis
    File Name: M3_Discussion.cpp
    Date: 9/11/2024

    Description: This program displays the season based on the month entered.
*/

#include <iostream>

using namespace std;


int main()

{
    int num;

    cout << "What season were you born in?" << endl;

    cout << "Based on the month you were born, press 1-12, with 1 being Janurary, for example" << endl;
    cin >> num;


    if (num == 1)
        cout << "Janurary: Winter" << endl;
    else if (num == 2)
        cout << "February: Winter" << endl;
    else if (num == 3)
        cout << "March: Spring" << endl;
    else if (num == 4)
        cout << "April: Spring" << endl;
    else if (num == 5)
        cout << "May: Spring" << endl
    else if (num == 6)
        cout << "June: Summer" << endl;
    else if (num == 7)
        cout << "July: Summer" << endl;
    else if (num == 8)
        cout << "August: Summer" << endl;
    else if (num == 9)
        cout << "September: Fall" << endl;
    else if (num == 10)
        cout << "October: Fall" << endl;
    else if (num == 11)
        cout << "November: Fall" << endl;
    else if (num == 12)
        cout << "December: Winter" >> endl;
    else
        cout << "Invalid input. Please enter a number between 1-12" << endl;


    return 0;
}