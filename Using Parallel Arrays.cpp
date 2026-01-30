#include <iostream>
#include <iomanip>
using namespace std ;

int main ()
{
	const int size = 5 ;
	string names[size] = { "Taylor", "Billie", "Stella", "Olivia", "Camila" } ;
	int grades[size] = { 98, 95, 87, 84, 76 } ;
	int total = 0 ;
	double average = 0 ;
	
	cout << " Names " << setw(15) << " Grades " << endl ; 
	for ( int i = 0 ; i<size ; i++ )
	{
		cout << " " << names[i] << setw(12) << grades[i] << endl ;
		
		total += grades[i] ;
	}
	cout << endl ;
	average = static_cast <double> (total)/size ;
	
	cout << " Average Grade: " << average ;
	
	return 0 ;
}


