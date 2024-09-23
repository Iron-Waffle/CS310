/*
	Student Name: Boris Davis
	File Name: Ch05Exercise33.cpp
	Date: 9/18/2024

	Description: Program used by Bianca to calculate the amount of dishes she can cook based on the minutes entered.
*/

#include <iostream>

using namespace std;

int main()
{
	cout << "===================================" << endl;
	cout << "Welcome to Bianca's Meal Calculator" << endl;
	cout << "===================================" << endl;

	// Local variables in Bianca's program.
	int birthday_Starting_Dish;
	int additional_Dish_Added;
	int total_Cook_Time;

	// Prompts the user for the minutes needed for the first meal.
	cout << "\nEnter the minutes needed to prepare the first meal: " << endl;
	cin >> birthday_Starting_Dish;

	// Prompts the user for the minutes needed for additional dishes.
	cout << "\nEnter the minutes for needed for additional minutes: " << endl;
	cin >> additional_Dish_Added;

	// Prompts for the total time available to cook all meals.
	cout << "\nEnter the total minutes available to cook all meals: " << endl;
	cin >> total_Cook_Time;

	// Initializes these lines to 0 for easier initial tracking.
	int current_Cook_Time = 0;
	int meal_Count = 0;
	int i = 0; 

	// This line loops as long as the current cook time is less than or equal to the total cook time.
	for (; current_Cook_Time <= total_Cook_Time;)
	{
		if (current_Cook_Time > total_Cook_Time) // This lines checks to see if the current cook time exceeds the total cook time. 
												// If this is true, the error comment is output before the break exits the code.
		{
			cout << "Error: Current cook time exceeds the total time available. " << endl;
			break;
		}
		meal_Count++; // increases as additonal dishes are added.
		current_Cook_Time = current_Cook_Time + (additional_Dish_Added + i * birthday_Starting_Dish); // This line updates the current cook time
		i++; // counter
	}
	// Outputs the total dishes that Bianca can make based on the minutes entered.
	cout << "\nBianca can cook " << meal_Count << " dishes if " << total_Cook_Time << " minutes are available." << endl;

	// Closing message for non-Visual Studio IDEs.
	cout << "\nPress any key to continue..." << endl;

	// Exits the code.
	return 0;
}