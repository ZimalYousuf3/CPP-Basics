#include <iostream> 
using namespace std ;

int getNextEmployeeID()
{
	// Declaring a static local variable
	
	static int nextID = 1000 ;
	return nextID++ ;
}

int main ()
{
	// Generating employee IDs

	for (int i = 1 ; i <= 8 ; i++)
	{
		cout << " Employee " << i << " ID : " << getNextEmployeeID() << endl;
	}
	
	return 0 ;
}


