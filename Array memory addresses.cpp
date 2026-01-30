#include <iostream>
using namespace std ;
int main ()
{
	int num [3] = { 2 , 4 , 6 } ;
	for ( int i = 0 ; i < 3 ; i++ )
	{
		cout << " num [" << i << "] = " << num [i] << " at address: " << &num [i] << endl ;
	}
	return 0 ;
}


