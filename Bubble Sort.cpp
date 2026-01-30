#include <iostream>
using namespace std;
int main()
{
	int size = 5 ;
	int arr[size] = { 5,1,3,6,8 } ;

	for ( int i=0 ; i < size-1 ; i++ )
	{
		for ( int j=0 ; j < size-1-i ; j++)
		{
			int temp;
			if ( arr [j] > arr [j+1] )
			{
			   temp = arr[j] ;
			   arr[j] = arr[j+1] ;
			   arr[j+1] = temp ;	
			}
		}
	}
	cout << " Sorted array in Ascending order:- " << endl ;
	for ( int i = 0 ; i < size ; i++ )
	cout << " " << arr[i] << " " ;
	
	return 0 ;
}