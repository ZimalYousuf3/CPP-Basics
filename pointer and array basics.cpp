#include <iostream>
using namespace std ;
int main ()
{
	int number = 13 ;
	int *ptr = &number ;
	cout << ptr << endl ;
	cout << *ptr << endl ;
	cout << &number << endl ; 
	
	int arr[5] = {1,2,3,4,5} ;
	cout << arr[2] << endl ;
	cout << *(arr + 2) << endl ;
	cout << *arr << endl ; 
	
	int arr[4] = {2, 4, 6, 8} ;
	int *ptr = arr ;
	for (int i=0 ; i<4 ; i++)
	{
		cout << *ptr << " " ;
		*ptr++ ;
	}
} 