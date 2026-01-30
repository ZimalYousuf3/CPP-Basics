#include <iostream>
using namespace std ;

void counter ()
{
	static int count = 0 ;
	count ++ ;
	cout << " Count is " << count << endl ;
}

int main ()
{
	counter () ;
    counter () ;
	counter () ;
	
	cout << " Zimal Yousuf-27" ;
	return 0 ;	
}

