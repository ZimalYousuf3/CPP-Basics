#include <iostream>
using namespace std ;

int linearSearch (int arr[] , int size , int target )
{
	for( int i=0 ; i<size ; i++ )
	{
		if( arr[i] == target )
		{
			return i ; // FOUND
		}
	}
	return -1 ; // NOT FOUND
}

int main ()
{
	int size = 7 , target = 13 ;
	int arr[] = { 3 , 88 , 8 , 7 , 27 , 22 , 13 } ;
	
	int search = linearSearch ( arr , size , target ) ;
	
	cout << " Target value found at index " << search ;
	return 0 ;
}