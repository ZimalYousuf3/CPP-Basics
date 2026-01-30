#include <iostream>
#include <string>
using namespace std ;

int displayEmployee ( int ID ) // Function for IDs
{
	cout << " Employee ID: " << ID << endl ;
} 

void displayEmployee ( int ID , string name ) // Function for ID and Name 
{
	cout << " Employee Name: " << name << " , Employee ID: " << ID << endl ;
}

int main () 
{
	string name ;
	double salary ;
	int ID ;
	cout << " Taking Employee Details :- " << endl ; // Taking Employee Details
	cout << endl ;
	
	cout << " Enter employee name: " ;
	getline ( cin,name ) ;
	
	cout << " Enter the ID: " ;
	cin >> ID ;
	cout << endl ;
	
	cout << " Displaying IDs :- " << endl ; // Displaying Details
	displayEmployee ( ID ) ;
	cout << endl ;
	
	cout << " Displaying the Employee Details :- " << endl ;
	displayEmployee ( ID , name ) ;
	
	return 0 ;
}





