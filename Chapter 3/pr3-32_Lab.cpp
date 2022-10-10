// This program demonstrates using the C++ time function
// to provide a "seed" for the random number generator.
#include <iostream>
#include<iomanip>

#include <cstdlib>       // Header file needed to use srand and rand
#include <ctime>         // Header file needed to use time
using namespace std;

int main()
{ 
	unsigned seedTwo; //new random number gernerator variable
	unsigned seed;         // Random generator seed

    // Use the time function to get a "seed" value for srand
	
	seed = time(0);	

	srand(seed); //will make it random but will not always seem random because of an algorithm
	//figure out how to limit it to 0 and 1 because %0 + 1 doesn't work
	
	seed = rand() % (1 - 0 + 1) + 0; //will give randomly a 1 or 0
	seedTwo = rand() % (1 - 0 + 1) + 0; // second to give a 1 or 0



	//setw is to control the line spacing of our random numbers
	
	// Now generate and print three random numbers
	// the "" is the space in beteen
	cout << setw(2) << seed << "      " ;
	cout << setw(2) << seedTwo << "      " ;
	cout << setw(2) << seed << endl;

	cout << setw(2) << seedTwo << "      ";
	cout << setw(2) << seed << "      ";
	cout << setw(2) << seedTwo << endl;

	cout << setw(2) << seed << "      ";
	cout << setw(2) << seedTwo << "      ";
	cout << setw(2) << seed<< endl;

	return 0;

}