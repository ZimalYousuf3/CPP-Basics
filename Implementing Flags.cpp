#include <iostream>
using namespace std ;
int main ()
{
	int i , number ;
	bool isPrime = true ;
	
	cout << " Enter a number : " ;
	cin >> number ;
	
	for ( i = 2 ; i < number ; i++ )
    {
    	if ( number % i == 0 )
    	{
    		isPrime = false ;
    		break ;
		}
    }
		if ( i == number )
		{
			isPrime = true ;
		}
        
        if (isPrime)
        {
        	cout << number << " is prime. " << endl ;
		}
		else 
		{
			cout << number << " is composite. " << endl ;
		}
	return 0 ;	
}
