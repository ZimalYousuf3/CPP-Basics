#include <iostream>
using namespace std ;
int main ()
{
	int number , secretNumber = 13  , attempts = 0 ;
	
	cout << " Welcome to the number guessing game! " << endl ;
	do{
		cout << " Enter your guess: " ;
		cin >> number ;
		attempts++ ;
		
		if ( number > secretNumber )
		cout << " Too high! " << endl ; 
		
		else if ( number < secretNumber )
		cout << " Too low! " << endl ;
		
		else 
		cout << " CONGRATS You have guessed the number in " << attempts << " attempts.";
	} while (number!= secretNumber) ;
	
	return 0 ;
}

