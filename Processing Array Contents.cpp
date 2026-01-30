#include <iostream>
#include <climits> // For INT_MAX & INT_MIN
using namespace std ;

int main ()
{
	const int size = 10 ;
	int even = 0, odd = 0 , max = INT_MIN , min = INT_MAX ;
	int numbers [size] = { 2, 5, 8, 4, 7, 9, 12, 17, 18, 20 } ;
	
	// Even & Odd
	for ( int i = 0 ; i < size ; i++ )
	{
		if ( numbers[i] % 2 == 0 )
		even++ ;
		
		else
		odd++ ;
		
	// Maximum & Minimum	
		if ( numbers[i] > max )
		{
			max = numbers [i] ;
		}
		
		if ( numbers[i] < min )
		{
			min = numbers[i] ;
		}
	}
	
	cout << " Array: " ;
	for ( int values : numbers )
	cout << values << " " ;
	cout << endl ;
	
	cout << " Even numbers: " << even << endl ;
	cout << " Odd numbers: " << odd << endl ;
	cout << " Maximum number: " << max << endl ;
	cout << " Minimum number: " << min << endl ;
	
	return 0 ;
}


