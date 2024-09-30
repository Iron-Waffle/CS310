/*
	Student Name: Boris Davis
	File Name: Ch06Exercise14.cpp
	Date: 9/24/2024
	Description: J & J accounting calculator used to provide assistance to clients who prepare their own tax returns.
*/

#include <iomanip>
#include <iostream>

using namespace std;

/* I chose to use global constants because 
I found this approach easier in terms of readability. */
const int lower_Income_Range = 25000;
const int time_Range_One = 30;
const int time_Range_Two = 20;

double FirmCalculations(double hourly_Payment, int consulting_Time)
{
	// This line calculates the cost based on the hourly payment and consulting time.
	double projected_Income = hourly_Payment * consulting_Time;

	// This line determines if the income is less than or equal the lower income range 
	// and if the consulting time is less than or equal to 30 minutes.
	if (projected_Income <= 25000 && consulting_Time <= 30)
	{
		return 0; // No charge is due if this criteria is met.
	}
	else if (consulting_Time > time_Range_One) // Checks if the consulting time exceeds 30 minutes.
	{
		double time_Range_One = consulting_Time - 30; // The time past the first time range (30 minutes).
		return 0.40 * hourly_Payment * (time_Range_One / 60);// The service charge of 40% the hourly rate if time exceeds 30 minutes.
	}
	else if (consulting_Time <= time_Range_Two) // Checks if consulting time is less than or equal to 20 minutes.
	{
		return 0; // No charge is due if this criteria is met.
	}
	else if (consulting_Time > time_Range_Two) // Checks if consulting time exceeds 20 minutes.
	{
		double time_Range_Two = consulting_Time - 20; // The time past the second time range (20 minutes).
		return 0.70 * hourly_Payment * (time_Range_Two / 60); // The service charge of 70% the hourly rate if time exceeds 20 minutes.
	}
}

int main()
{
	// Vairables to store payment rate, consulting time, and total income.
	double payment_Rate;
	int consulting_Time_Used;
	int client_Total_Income;

	// Initializes the bill amount to 0.
	double payment_Amount_Due = 0;

	cout << "===========================================================" << endl;
	cout << "Welcome to the J & J Accounting Firm Assistance Calculator " << endl;
	cout << "===========================================================" << endl;

	// This line ensures two decimal places are shown/used.
	cout << fixed << showpoint << setprecision(2) << endl;

	// Outputs the initial greeting message to the user.
	cout << "Let's get started..." << endl;

	// Prompts the user for the hourly rate.
	cout << "\n\nEnter the hourly rate(dollar amount) for this session: " << endl;
	cin >> payment_Rate;

	// Prompts the user for the minutes used for this consultation session.
	cout << "\nEnter the total minutes for this consultation: " << endl;
	cin >> consulting_Time_Used;

	// Prompts the user to enter the yearly income.
	cout << "\nEnter the annual income amount: " << endl;
	cin >> client_Total_Income;

	// Calculates the billing amount due for the consultation.
	payment_Amount_Due = FirmCalculations(payment_Rate, consulting_Time_Used);

	// Output message displaying the amount due based on the hourly rate and the total consultation time.
	cout << "\n\nBased on the hourly rate of $" << payment_Rate << " and the time for this consultation, " << consulting_Time_Used
		<< " minutes, the total bill comes to $." << payment_Amount_Due << endl;

	// Checks to see If the client's total income is less than or equal to the lower income range (25000).
	if (client_Total_Income <= 25000)
	{
		cout << "\nThe total income $" << client_Total_Income << " matches the criteria for the low income range of $25000." << endl; // Ff the lower income criteria is met, this message is displayed.
	}
	else
		cout << "\nThe annual income amount of $" << client_Total_Income << " is above the low income criteria." << endl; // If the total income exceeds $25000, this message is instead displayed.

	// Closing message for non-Visual Studio IDEs.
	cout << "\n\nPress any key to continue..." << endl;

	// Exits the code.
	return 0;
}