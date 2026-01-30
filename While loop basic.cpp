#include <iostream>
using namespace std ;
int main ()
{
	int counter = 0 ;
	int number = 1 ;
	while ( number <= 6 )
	{
		counter = counter + 1 ;
		cout << "Loop iteration : " << counter << endl ;
		number = number + 2 ;
	}
	cout << "Final counter value: " << counter << endl ;
	return 0 ;
}