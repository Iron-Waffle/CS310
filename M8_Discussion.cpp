/*
	Description: Displays the current day and weather.
*/

#include <iostream>

using namespace std;

class date
{
public:
	void printDate() const
	{
		cout << "Today is Monday." << endl;
	}
};

class Weather
{
public:
	void display.Weather() const
	{
		cout << "It will be sunny today." << endl;
	}
};

int main()
{
	Date today;
	Weather weather;

	today.printDate();
	weather.displayWeather();

	cout << "Press any key to continue..." << endl;

	return 0;
}