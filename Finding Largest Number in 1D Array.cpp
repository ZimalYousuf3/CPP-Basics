#include <iostream>
using namespace std ;
int main ()
{
    const int size = 5 ;
    int arr [size] ;
    int largest ;
    
    // Taking user input
    cout << " Enter 5 integers : " << endl ;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        cout << " Enter number: " ;
        cin >> arr [i] ;
    }
    // Finding Largest Number
    largest = arr [0] ;
    for ( int i = 0 ; i < 5 ; i++ )
    {
        if ( arr[i] > largest )
        {
            largest = arr[i] ;
        }
    }
    cout << " Largest Number : " << largest ;

    return 0 ;  
}