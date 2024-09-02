/*
* Student Name: Boris Davis
* File Name: Ch02Exercise13.cpp
* Date: 8/31/2024
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
	/*These are the variables*/

	double original_Price;
	double markup_Percentage;
	double sales_Tax_Rate;

	cout << "Enter the original item price: $" << endl;
	cin >> original_Price;

	cout << "Enter the markup percentage" << endl;
	cin >> markup_Percentage;

	cout << "Enter the sales tax rate" << endl;
	cin >> sales_Tax_Rate;

	/* Finding the selling price */
	double markup_Amount = (markup_Percentage / 100.0) * original_Price;
	double selling_Price = original_Price + markup_Amount;

	/* Finding the sales tax */
	double sales_Tax_Amount = (sales_Tax_Rate / 100.0) * selling_Price;

	/* Finding the final price */
	double final_Price = selling_Price + sales_Tax_Amount;

	/* Display the results */

	cout << "OriginalPrice of the item: $" << original_Price << endl;
	cout << "Percentage of the mark up: " << markup_Percentage << endl;
	cout << "selling price of the item: $" << selling_Price << endl;
	cout << "Sales tax Rate: " << sales_Tax_Rate << endl;
	cout << "Sales Tax: $" << sales_Tax_Amount << endl;
	cout << "final price of the item: $" << final_Price << endl;

	/* Press enter to exit */
	cout << "Press enter to exit.";

	_getch();


	return 0;
}