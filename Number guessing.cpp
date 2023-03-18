#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int arr [23];
	int n=23;

	return 0;
}
{
int main()
	
	int num, guess, tries = 0;
	srand(time(0)); 
	num = rand() % 100; 
	cout << "Starting the Number Game\n\n";

	while (guess!= num); {
		cout << "Enter a guess between 0 and 100: "; 
		cin >> guess; 
		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else  
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	}  

	return 0; 
}
