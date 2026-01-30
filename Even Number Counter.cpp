#include <iostream>
using namespace std;
int main ()
{
	int n , count = 0 ;
	
	cout << " Enter a number: " ;
	cin >> n ;
	
	for ( int i = 1 ; i<=n ; i++ )
	{
		if ( i % 2 == 0) 
		count++ ;
	}
	
	cout << " " << count << " even numbers found between 1 and " << n << endl ;
	
	return 0 ;
}


