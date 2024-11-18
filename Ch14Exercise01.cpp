/*
	Student Name: Boris Davis
	File Name: Ch14Exercise01.cpp
	Date: 11/12/2024
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

class Negative_Number_Exception	// Custom exception class for negative input.
{
public:
	const char* what() const	// Returns the error message for negative numbers.
	{
		return "Error: please input only positive numbers.";
	}
};

class Non_Digit_Exception	// Custom exception class for non-numeric input.
{
public:
	const char* what() const	// Returns the error message for non-numeric input.
	{
		return "Error: Invalid input. Please enter only numerical values.";
	}
};

double convert_To_Centimeters(int feet, int inches)	// Function to convert both feet and inches into centimeters.
{
	const double feet_To_centimeters = 30.48;	// Constant conversion for converting 1 foot into centimeters.
	const double inches_To_Centimeters = 2.54;	// Constant conversion for converting 1 inch into centimeters.
	return(feet * feet_To_centimeters) + (inches * inches_To_Centimeters);	// Finds and returns the converted length into centimeters.
}

bool get_Measurements(const string& prompt, int& measurement)	// Function to get the measurements from the user.
{
	string input;	// Variable to store user input as a string.
	cout << prompt;	// Displays the prompt to the user.
	getline(cin, input);	// Reads the entire line.
	stringstream stream(input);	// Creates a stringstream to convert the input to a number.

	if (!(stream >> measurement))	// Checks if input can be converted to an integer.
	{
		throw Non_Digit_Exception();	// Throw exception if the input is not a valid number.
	}

	if (measurement < 0)	// Checks if the input number is negative.
	{
		throw Negative_Number_Exception();	// throw exception if the number is negative.
	}
	
	return true;	// true if input is valid.
}

int main()
{
	cout << fixed << showpoint << setprecision(2) << endl;	// Sets output formatting for decimal placement.

	int num_Measurements = 0;	// Variable for storing the number of measurements.
	cout << "How many measurements will you be inputting? " << endl;	// Asks the user to enter the number of measurements.
	cin >> num_Measurements;	// reads the number of measurements entered by the user.
	cin.ignore();	// Ignore the newline character in the input buffer.

	int* feet_Array = new int[num_Measurements];	// Dynamic array to store feet measurement values.
	int* inches_Array = new int[num_Measurements];	// Dynamic array to store inches measurement values.

	for (int i = 0; i < num_Measurements; i++)	// Loops through each measurement.
	{
		bool valid_Input = false;	// Checks if the input is valid for the current measurement.
		while (!valid_Input)	// Loops and prompts the user until a valid input is entered.
		{
			try
			{	// Gets the feet input and validates it.
				if (!get_Measurements("\nEnter the length in feet (measurement" + to_string(i + 1) + "): ", feet_Array[i]))
				{
					throw Non_Digit_Exception();	// Throw exception if the input is not a valid digit.
				}
				// Gets the inches input and validates it.
				if (!get_Measurements("Enter the length in inches (measurement" + to_string(i + 1) + "): ", inches_Array[i]))
				{
					throw Non_Digit_Exception();
				}

				double centimeters = convert_To_Centimeters(feet_Array[i], inches_Array[i]);	// Convert the valid feet and inches values into centimeters.
				cout << "\nmeasurement " << i + 1 << " in centimeters is " << centimeters << " cm.\n" << endl;	// Displays the conversion result in centimeters.

				valid_Input = true;
			}
			catch (const Negative_Number_Exception& e)	// Catch exception for negative numbers.
			{
				cout << e.what() << endl;	// Error message for negative numbers.
				valid_Input = false;	// repeats prompt asking the user for valid input.
			}

			catch (const Non_Digit_Exception& e)	// Catch exception for non-numeric input.
			{
				cout << e.what() << endl;	// Error message for non-numeric input.
				valid_Input = false;
			}
		}
	}

	delete[] feet_Array;	// Deallocates memory for feet array.
	delete[] inches_Array;	// Deallocates memory for inches array.

	cout << "\nPress any key to continue..." << endl;	// Closing message for non-Visual Studio's IDEs.

	return 0;	// Exits code.
}