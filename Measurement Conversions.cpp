#include <iostream>
using namespace std ;
int main ()
{
	int result_1 = 13 / 12 ;
	// INTEGER CONVERSION
	cout << " INTEGER CONVERSION " << endl ;
	cout << " Result 1 = " << result_1 << endl ;
	cout << " Both values are integers so result will be in integer form. " << endl ;
	cout << endl ;
	
	// FLOATING-POINT CONVERSION
	double result_2 = 13.0 / 12.0 ;
	cout << " FLOATING-POINT CONVERSION " << endl ;
	cout << " Result 2 = " << result_2 << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C-Style)
	double result_3 = (double) 13/12 ;
	cout << " EXPLICIT CASTING (C-Style)" << endl ;
	cout << " Result 3 = " << result_3 << endl ;
	cout << " 13 is explicitly casted to double before division so result is in double. " << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C++ - Style)
	double result_4 = static_cast<double> (13) / 12 ;
	cout << " EXPLICIT CASTING (C++ - Style) " << endl ;
	cout << " Result 4 = " << result_4 << endl ;
	cout << endl ;
	
	// MEASUREMENT TRUNCATION
	double precise_length = 8.75 ;
	double truncated_length = static_cast <int> (precise_length) ;
	cout << " Precise length = " << precise_length << endl ;
	cout << " Truncated length = " << truncated_length << endl ;
}



