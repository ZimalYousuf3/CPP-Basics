#include <iostream>
using namespace std ;
int main ()
{
	int num , factorial = 1 ;

	cout << " Enter a number: ";
	cin >> num ;
		
	for (int i = 1 ; i <= num ; i++)
	{
		factorial *= i ;
	}
	
	if ( num < 0 )
	{
		cout << " Factorial is not defined for negative number! "<< endl ;
	}
	else
	{
		cout << " " << num << "! = " << factorial << endl ;
	}
	return 0 ;
}

