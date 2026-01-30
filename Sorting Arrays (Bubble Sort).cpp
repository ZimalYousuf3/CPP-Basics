#include <iostream>
using namespace std ;

const int SIZE = 6 ;

// Function for printing an array
void printArray ( int arr[], int SIZE )
{
	for ( int i=0 ; i<SIZE ; i++ )
	{
		cout << " " << arr[i] << " " ;
	}
	cout << endl ;
}

 // Function for Bubble Sorting an Array
void bubbleSortArray ( int arr[], int SIZE )
{
	for ( int i=0 ; i<SIZE-1 ; i++ )
	{
		for ( int j=0 ; j<SIZE-i-1 ; j++ )
		{
			if ( arr[j] > arr[j+1] )
			{
				swap ( arr[j] , arr[j+1] ) ;
			}
		}
	}
}

int main ()
{
    int numbers [SIZE] = { 3, 9, 2, 1, 6, 0 } ;
    
    cout << " Original Array:- " << endl ;
    printArray ( numbers, SIZE ) ;
    
    bubbleSortArray ( numbers, SIZE ) ;
    
    cout << " Sorted Array:- " << endl ;
    printArray ( numbers, SIZE ) ;
    
    return 0 ;
}

