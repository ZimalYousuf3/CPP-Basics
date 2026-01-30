#include <iostream>
#include <string>
using namespace std ;

void greetEmployee (string name , string prefix = " ") 
{
	cout << " Hello , " << prefix << name << endl ;
}

int main()
{
	greetEmployee ("Zimal") ;
	greetEmployee ("Fajar","Dr.") ;
	greetEmployee ("Maira","Engr.") ;
	
	return 0 ;
}


