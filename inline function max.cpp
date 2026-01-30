#include <iostream>
using namespace std ;

inline int Max(int a , int b)
{
	if ( a > b )
	return a ;
	
	else 
	return b ;
}

int main ()
{
	int a , b ;
	cout << " Enter the two integers: ";
	cin >> a >> b ;
	
	cout << " Maximum number = " << Max(a,b) << endl ;
	return 0 ;
}