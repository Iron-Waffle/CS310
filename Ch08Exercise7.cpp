/*
	Student Name: Boris Davis
	File Name: Ch08Exercise7.cpp
	Date: 10/12/2024

	Description: This program displays the last names of the candidates, the total votes received, 
				 the percentage of votes received, and the winner of the election.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constant for the five candidates.
const int election_Candidates = 5;

// Function for the candidate last names and votes.
void TheCandidates(string names[], int votes[])
{
	for (int i = 0; i < election_Candidates; i++)
	{
		cout << "\nEnter the last name of candidate " << (i + 1) << " : " << endl;
		cin >> names[i]; // Stores the name input by the user into the names array.

		cout << "\nEnter the total votes received by " << names[i] << endl;
		cin >> votes[i]; // Stores the votes for the candidates into the votes array.
	}
}

int main()
{
	cout << "===============================================" << endl;
	cout << "=======|Welcome to The Vote Calculator!|=======" << endl;
	cout << "===============================================" << endl;

	string Candidate_Last_Name[election_Candidates]; // This array holds the last name of the candidates.
	int Democratic_Process[election_Candidates] = { 0 }; // This array holds the candidate votes and initializes to 0.

	cout << fixed << showpoint << setprecision(2) << endl; // Line for the vote percentage decimal placement.

	TheCandidates(Candidate_Last_Name, Democratic_Process); // This calls the function from above for candidate last names and votes.

	int received_Votes = 0; // Initializes the total votes received to 0.
	for (int i = 0; i < election_Candidates; i++) // Loops for adding up all the received votes.
	{
		received_Votes = received_Votes + Democratic_Process[i]; // Calculates the total votes.
	}


	int highest_Votes = 0; // Variable for finding the candidate with the most votes.
	for (int i = 1; i < election_Candidates; i++) // This loops through the votes array to find the candidate with the most votes.
	{
		if (Democratic_Process[i] > Democratic_Process[highest_Votes])
		{
			highest_Votes = i; // Updates the index of the candidate with the most votes.
		}
	}
	// Announces that votes have been counted in the election.
	cout << "\nAll votes have been counted. The results are: \n" << endl;
	for (int i = 0; i < election_Candidates; i++) // Loops through the candidates and shows the results.
	{
		double candidate_Vote_Percentage; // Holds the vote percentage.
		if (received_Votes > 0)
		{
			candidate_Vote_Percentage = (Democratic_Process[i] * 100.0) / received_Votes; // Calculates the percentage of the votes received by the candidate.
		}
		else
			candidate_Vote_Percentage = 0.0; // Sets to 0 if no votes are received.

		// Outputs the election results, showing the candidate last name, the votes they received, and the total percentage of votes recieved.
		cout << "Candidate: " << Candidate_Last_Name[i] << ", votes: " << Democratic_Process[i] << ", Percentage: " << candidate_Vote_Percentage << "%" << endl;
	}
	// Outputs the winner of the election.
	cout << "\nThe election winner is " << Candidate_Last_Name[highest_Votes] << "." << endl;

	// Closing message for non-Visual Studio IDEs.
	cout << "\nPress any key to continue..." << endl;

	// Exits the code
	return 0;
}