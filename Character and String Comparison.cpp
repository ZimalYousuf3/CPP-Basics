#include <iostream>
using namespace std ;
int main ()
{
	char grade ;
	string password ;
	
	cout << " Enter your grade (A-F): " ;
	cin >> grade ;
	
	if ( grade >= 'A' && grade <= 'F' )
	{
		cout << " Valid Grade. " << endl ;
	}
	else
	{
		cout << " Invalid Grade! " << endl ;
	}
	
	cout << " Enter your password: " ;
	cin >> password ;
	
	if ( password == "admin123" )
	{
		cout << " Valid Password. " << endl ;
	}
	else
	{
		cout << " Invalid Password. " << endl ;
	}
	
	return 0 ;
}

