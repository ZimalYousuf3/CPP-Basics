#include <iostream>
using namespace std ;
int main ()
{
	int result_1 = 5 / 2 ;
	// INTEGER DIVISION
	cout << " INTEGER DIVISION " << endl ;
	cout << " Result 1 = " << result_1 << endl ;
	cout << " Both values are integers so result will be in integer form. " << endl ;
	cout << endl ;
	
	// FLOATING-POINT DIVISION
	double result_2 = 5.0 / 2.0 ;
	cout << " FLOATING-POINT DIVISION " << endl ;
	cout << " Result 2 = " << result_2 << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C-Style)
	double result_3 = (double) 5/2 ;
	cout << " EXPLICIT CASTING (C-Style)" << endl ;
	cout << " Result 3 = " << result_3 << endl ;
	cout << " 5 is explicitly casted to double before division so result is in double. " << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C++ - Style)
	double result_4 = static_cast<double> (5) / 2 ;
	cout << " EXPLICIT CASTING (C++ - Style) " << endl ;
	cout << " Result 4 = " << result_4 << endl ;
	cout << endl ;
	
	// FLOATING-POINT TO INTEGER TRUNCATION
	double original = 99.9 ;
	double casted = static_cast <int> (original) ;
	cout << " FLOATING-POINT TO INTEGER TRUNCATION " << endl ;
	cout << " Original Value = "<< original << endl ;
	cout << " Casted Value = " << casted << endl ;
}



