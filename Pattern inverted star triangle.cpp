#include <iostream>
using namespace std ;

int main()
{
	for ( int i = 1 ; i <= 7 ; i++ )
	{
		int j = i ;
		while ( j <= 7 )
		{
			j++ ;
		    cout << " * " ;
		}
		cout << endl ;	
	}
	return 0 ;
}