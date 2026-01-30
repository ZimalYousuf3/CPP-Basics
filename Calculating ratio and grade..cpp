#include <iostream>
using namespace std;
int main()
{
	// Ratio
	int x = 30 , y = 20 ;
	int gcd = 1 ;
	int i ;
	for ( i = 1 ; i <= x && i <= y ; i++ )
	{
		if ( x % i == 0 && y % i == 0 ) 
		gcd = i ;
	}
	cout << " Ratio = " << x/gcd << " : "<< y/gcd << endl ;
	
	// Grade
	float percentage ;
	cout << " Enter your percentage = " ;
	cin >> percentage ;
	if ( percentage >= 90 )
	cout << " Your grade is A+. " ;
	else if ( percentage >= 80)
	cout << " Your grade is A. " ;
	else if ( percentage >= 70 )
	cout << " Your grade is B. " ;
	else if ( percentage >= 60 )
	cout << " Your grade is C. " ;
	else if ( percentage >= 50 )
	cout << " Your grade is D. " ;
	else 
	cout << " Your grade is F." ;
	
	return 0 ;
} 
