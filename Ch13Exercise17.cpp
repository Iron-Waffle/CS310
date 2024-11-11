/*
	Student Name: Boris Davis
	File Name: Ch13Exercise17.cpp
	Date: 11/8/2024
*/

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

template <typename Engine>	// Template function to initialize random engine with a random seed.
Engine Random_Number_Initialization()
{
	random_device rdevice;	// Pulls a random seed from the system.
	return Engine(rdevice());	// Initialize the engine with the random seed.
}

template <typename Distribution, typename Engine, typename T>	// Template that creates random numbers and stores them in the array.
void find_The_Numbers(Engine& engine, Distribution& distribution, T* randomNumbers, int count)
{
	for (int i = 0; i < count; i++)	// Loop through the array to generate random numbers (the count).
	{
		randomNumbers[i] = distribution(engine);	// generates a random number and stores it in the array.
	}
}

template <typename T>	// Template used to display the generated random numbers.
void show_Random_Numbers(const T* numbers, int count)
{
	for (int i = 0; i < count; i++)	// Loops over the array of random numbers.
	{
		cout << "Random number " << (i + 1) << ": " << numbers[i] << endl;	// Displays each number.
	}
}

int main()
{
	cout << fixed << showpoint << setprecision(2) << endl;	// Enables formatting for decimal placement.

	default_random_engine number_Generator = Random_Number_Initialization<default_random_engine>();	// Initialize the random engine.

	uniform_real_distribution<double> realDistribution(10.0, 100.0);	// Creates a distribution for real numbers between 10 and 100.

	int count = 25;	// Determines how many random real numbers are generated.

	double* random_Numbers = new double[count];	// Dynamically allocates an array to store the random numbers.

	find_The_Numbers(number_Generator, realDistribution, random_Numbers, count);	// Generates random numbers using the engine and distribution.

	cout << "Fetching 25 real numbers between 10 and 100: \n" << endl;	// Output prompt for displaying the random numbers.

	show_Random_Numbers(random_Numbers, count);

	delete[] random_Numbers;	// Deallocates memory.

	cout << "\nPress any key to continue..." << endl;	// Closing message for non_Visual Studio IDEs.

	return 0;	// Exits code.
}