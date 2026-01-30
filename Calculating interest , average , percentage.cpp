#include <iostream>
using namespace std;
int main()
{
	// Simple interest
	float principal = 5.4 , rate = 30.0 , time = 30 ;
	float interest ;
	interest = ( principal * rate * time ) / 100 ;
	cout << " Simple Interest = " << interest << endl ;
	
	// Average
	float a = 35.2 , b = 56.0 , c = 23.1 , d = 3.2 , e = 13 ;
	float average ;
	average = ( a + b + c + d + e) / 5.0 ;
	cout << " Average = " << average << endl ;
	
	// Percentage
	float total_marks = 1100 , obtained_marks = 989 ;
	float percentage ;
	percentage = ( obtained_marks / total_marks ) * 100 ;
	cout << " Percentage = " << percentage ;
	
	return 0 ;
}