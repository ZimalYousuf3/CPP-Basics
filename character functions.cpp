#include <iostream>
#include <cctype>
using namespace std ;
int main ()
{
	char c ;
	cout << " Enter a character: " ;
	cin >> c ;
	
	if ( isalpha(c) )
	{
		cout << " " << c << " is an alphabet. " << endl ;
		cout << " Uppercase : " <<  (char)  toupper (c) << endl ;
		
		cout << " Lowercase : " <<  (char)  tolower (c) << endl ;
	}
	
	else if ( isdigit(c) ) 
	{
		cout << " " << c << " is a digit. " << endl ;
	}
	
	else 
	{
		cout <<" " << c << " is a special character. " ;
	}
	return 0 ;
}