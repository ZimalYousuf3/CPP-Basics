#include <iostream>
using namespace std ;

void printArray ( int arr[] , int size ) 
{
	for ( int i=0 ; i<size ; i++ )
	cout << arr[i] << " " ;
}

void modifyArray ( int arr[] , int size , int multiplier )
{
	for ( int i=0 ; i<size ; i++ )
	{
		arr[i] *= multiplier ;
	}
}

int main ()
{
	const int size = 5 ;
	int numbers [size] = { 1,2,3,4,5 } ;
	
	cout << " Original Array: " ;
	printArray ( numbers , size ) ;
	cout << endl;
	
	modifyArray ( numbers , size, 2) ;
	cout << " Modified Array: " ;
	printArray ( numbers , size ) ;
	
	return 0 ;
}



