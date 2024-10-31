#include <iostream>
#include <string>

using namespace std;

int main()
{
	int Today = 30;
	int* Ptr1 = &Today;

	int HeavyRain = "heavy rain";
	string Ptr2 = &HeavyRain;

	string TheDay = "Wednesday";

	cout << "Today is " << TheDay << " the " << *Ptr1 << "th." << endl;

	cout << "There will be " << *Ptr2 << " throughout the day. An umbrella is recommended." << endl;

	cout << "\nPress any key to continue..." << endl;

	return 0;
}