#include <iostream>
using namespace std ;
int main ()
{
	int num ;
	cout << " Enter a number (1-100): " ;
	cin >> num ;
	
	while ( num < 1 || num > 100 )
	{
		cout << " INVALID NUMBER! " << endl ;
		cout << " Enter a number (1-100): " ;
		cin >> num ;
	}
	
	cout << " Thank you! You entered " << num << "." << endl ;
	
	return 0 ;
}

