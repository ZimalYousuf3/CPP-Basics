#include <iostream>
#include <climits> // for INT_MIN & INT_MAX
using namespace std ;
int main ()
{
	int size = 5 , value1 = 0 , value2 = 0  ;
	int nums [size] = { 5 , -2 , 9 , 13 , 3 } ;
	
	int smallest = INT_MAX ;
	int largest = INT_MIN ;
	
	for( int i=0 ; i<size ; i++ )
	{
		/*smallest = min( nums[i] , smallest ) ;
		largest = max( nums[i] , largest ) ;*/
		
		if ( nums[i] < smallest )
		{
			smallest = nums[i] ;
			value1 = i ;
			
		}
		if ( nums[i] > largest )
		{
			largest = nums[i] ;
			value2 = i ;
		}
		
	}
	cout << " Smallest number= " << smallest << " at index " << value1 << endl ;
	cout << " Largest number= " << largest <<" at index " << value2 << endl ;
	
	return 0 ;
} 