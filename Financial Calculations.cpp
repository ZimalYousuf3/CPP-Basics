#include <iostream>
using namespace std ;
int main ()
{
	// INTEGER SPLIT
	int div_1 = 17 / 3 ;
	cout << " INTEGER SPLIT " << endl ;   
	cout << " Amount in Whole Dollars = $ " << div_1 << endl ;
	cout << " Both values are integers so result will be in integer form. " << endl ;
	cout << endl ;
	
	// PRECISE SPLIT
	double div_2 = 17.00 / 3.00 ;
	cout << " PRECISE SPLIT " << endl ;
	cout << " Precisely Split Dollars = $ " << div_2 << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C-Style)
	double cast_1 = (double) 17 / 3 ;
	cout << " EXPLICIT CASTING (C-Style)" << endl ;
	cout << " Result of C Style casting = " << cast_1 << endl ;
	cout << " 17 is explicitly casted to double before division so result is in double. " << endl ;
	cout << endl ;
	
	// EXPLICIT CASTING (C++ - Style)
	double cast_2 = static_cast<double> (17) / 3 ;
	cout << " EXPLICIT CASTING (C++ - Style) " << endl ;
	cout << " Result of C++ Style casting = " << cast_2 << endl ;
	cout << endl ;
	
	// PRICE TRUNCATION
	double cost = 45.99 ;
	double cost_without_cents = static_cast <int> (cost) ;
	cout << " PRICE TRUNCATION " << endl ;
	cout << " Price with cents = $ "<< cost << endl ;
	cout << " Price without cents = $ " << cost_without_cents << endl ;
}
