#include <iostream>
using namespace std ;
int main ()
{
	// INTEGER AVERAGE
	int average_1 = ( 7 + 4 ) / 2 ;
	cout << " INTEGER AVERAGE " << endl ;
	cout << " Average of 7 & 4 = " << average_1 << endl ;
	cout << endl ;
	
	// FLOATING-POINT AVERAGE
	double average_2 =  ( 7.0 + 4.0 ) / 2 ;
	cout << " FLOATING-POINT AVERAGE " << endl ;
	cout << " Average of 7.0 & 4.0 = " << average_2 << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C-Style)
	double casting_1 = (double) 7/4 ;
	cout << " EXPLICIT CASTING (C-Style)" << endl ;
	cout << " Result of C-Style Casting = " << casting_1 << endl ;
	cout << " 7 is explicitly casted to double before division so result is in double. " << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C++ - Style)
	double casting_2 = static_cast<double> (7) / 4 ;
	cout << " EXPLICIT CASTING (C++ - Style) " << endl ;
	cout << " Result of C++ Style Casting = " << casting_2 << endl ;
	cout << endl ;
		
	// FLOATING-POINT TO INTEGER TRUNCATION
	double original = 23.75 ;
	double casted = static_cast <int> (original) ;
	cout << " FLOATING-POINT TO INTEGER TRUNCATION " << endl ;
	cout << " Original Temperature is " << original << " C "   << endl ;
	cout << " Temperature after casting is " << casted << " C "  << endl ;
}
	
	
	
	
	
	
	