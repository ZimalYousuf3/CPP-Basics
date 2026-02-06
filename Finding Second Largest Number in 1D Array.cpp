#include <iostream>
using namespace std ;
int main ()
{
    const int size = 5 ;
    int arr [size] ;
    int largest, second_largest ;
    
    // Taking user input
    cout << " Enter 5 integers : " << endl ;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        cout << " Enter number: " ;
        cin >> arr [i] ;
    }

    largest = second_largest = arr [0] ;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        if ( arr[i] > largest )
        {
            largest = arr[i] ;
        }
        if ( arr[i] > second_largest && arr[i] != largest )
        {
        	second_largest = arr [i] ;
		}
    }
    cout << " Largest Number : " << largest << endl ;
    cout << " Second Largest : " << second_largest ;

    return 0 ;  
}