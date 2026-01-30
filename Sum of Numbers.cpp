#include <iostream>
using namespace std ;
int main ()
{
	int i , n , sum = 0 ;
	
	cout << " Enter positive integer : " ;
	cin >> n ;
	
	for ( i = 1 ; i <= n ; i++ )
	{
		sum += i ;
	}
	
	cout << " Sum of " << n << " natural numbers: " << sum << endl ;
	
	return 0 ;
}

