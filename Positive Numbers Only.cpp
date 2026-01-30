#include <iostream>
using namespace std ;
int main ()
{
	int num ;
	cout << " Enter a positive number: " ;
	cin >> num ;
	
	while ( num < 0 )
	{
		cout << " INVALID NUMBER! " << endl ;
		cout << " Enter a positive number: " ;
		cin >> num ;
	}
	
	cout << " Thank you! You entered " << num << "." << endl ;
	
	return 0 ;
}

