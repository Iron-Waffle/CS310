/*
	Student Name: Boris Davis
	File Name: Ch12Exercise03.cpp
	Date: 11/1/2024
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function for inputting candidate election information.
void TheCandidates(string* names, int numCandidates)
{
	for (int i = 0; i < numCandidates; i++) // Loops through each candidate to input last names.
	{
		cout << "\nEnter the last name of candidate " << (i + 1) << " : " << endl;
		cin >> names[i]; // Stores the last name for the candidates into the names array.
	}
}

// Function for inputting the votes received by each candidate.
void CandidateVotes(int* votes, const string* names, int numCandidates)
{
	for (int i = 0; i < numCandidates; i++) // Loops through each candidate to get votes received.
	{
		cout << "\nEnter the total votes received by " << names[i] << " : " << endl;
		cin >> votes[i]; // Stores the votes received by the candidates into the votes array.
	}
}

int main()
{
	int election_Candidates; // Variable for the number of candidates.

	cout << fixed << showpoint << setprecision(2) << endl; // Sets decimal placement for percentages.

	cout << "\nEnter the number of candidates: " << endl; // Output asking to enter the total number of candidates.
	cin >> election_Candidates; // reads the number of candidates entered.

	string* candidate_Last_Name = new string[election_Candidates]; // Dynamic array for candidate last names.
	int* Democratic_Process = new int[election_Candidates]; // Dynamic array for votes received.

	TheCandidates(candidate_Last_Name, election_Candidates); // Calls the function for inputting the candidate name.
	CandidateVotes(Democratic_Process, candidate_Last_Name, election_Candidates); // Calls the function for inputting votes.

	int received_Votes = 0; // Variable to accumulate the votes received.
	int highest_Votes = 0; // Variable to track the candidate with the most votes.

	for (int i = 0; i < election_Candidates; i++) // Loops through each candidate to count votes.
	{
		received_Votes = received_Votes + Democratic_Process[i]; // Calculates the votes received.

		if (Democratic_Process[i] > Democratic_Process[highest_Votes]) // Checks if the current candidate has the most votes.
		{
			highest_Votes = 1; // Updates the index with the candidate with the most votes.
		}
	}
	// Announces that all votes are counted.
	cout << "\nAll votes have been counted. The results: \n" << endl;

	for (int i = 0; i < election_Candidates; i++) // Loops through the candidates to display the results.
	{
		double candidate_Vote_percentage; // Holds the percentage of the votes for the candidate.

		if (received_Votes > 0)
		{
			candidate_Vote_percentage = (Democratic_Process[i] * 100.0 / received_Votes); // Finds the vote percentage.
		}
		else
		{
			candidate_Vote_percentage = 0.0; // Sets the percentage to 0 if no votes are received.
		}

		cout << "Candidate: " << candidate_Last_Name[i] << ", votes: " << Democratic_Process[i] << ", Percentage: "
			<< candidate_Vote_percentage << "%" << endl;
	}

	cout << "\nThe winner is " << candidate_Last_Name[highest_Votes] << "." << endl; // Displays the winner of the election after all votes are counted.

	delete[] candidate_Last_Name; // Deallocates memory for the dynamic array that stores the candidate last name.
	delete[] Democratic_Process; // Deallocates memory for the dynamic array that stores the votes received.

	cout << "\nPress any key to continue..." << endl; // Closing message for non-Visual Studio IDEs.

	return 0; // Exits code.
}