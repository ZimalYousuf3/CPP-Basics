#include <iostream>
using namespace std ;
int main ()
{
	const int QUIT = -1 ;
	int sum = 0 , number = 0 , count ;
	
    cout << " Enter the number (Enter " << QUIT << " to exit) : " ;
	cin >>  number ;
	
	while (number!= QUIT )
	{
		sum += number ;
		count ++ ;
		cout << " Sum = " << sum << endl ;
		
		cout << " Enter the number (Enter " << QUIT << " to exit) : " ;
	    cin >>  number ;
	} 
	
	cout << " Exiting...";
	return 0 ;
}