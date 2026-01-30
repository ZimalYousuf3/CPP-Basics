#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std ;
int main ()
{
	string name ;
	int salary ;
	
	// OPENING THE FILE FOR WRITING
	ofstream outFile ;
	outFile.open("employee.txt") ;
	
	// CHECKING FOR ERRORS IN WRITING
	if ( !outFile )
	{
		cout << " Error opening the file for writing! " ;
		exit (1) ;
	}  
	
	// TAKING DETAILS OF EMPLOYEES AS INPUT FROM USER
	cout << " ENTER EMPLOYEE DETAILS:- " << endl ;
	cout << endl ;
	
	for ( int i = 1 ; i<= 3 ; i++ )
	{
		cout << " Enter name of employee  " << i << " : " ;
		cin >> name ;
		
		cout << " Enter salary of employee  " << i << " : " ;
		cin >> salary ;
		
		cout << endl;
		
	// STORING DETAILS OF EMPLOYEES IN FILE	
		outFile << " Name of employee  " << i << " : " << name  << ", Salary of employee  " << i << " : " << salary << endl ;
		
	}
	
	outFile.close () ;
	
	// OPENING THE FILE FOR READING
	ifstream inFile ;
	inFile.open("employee.txt") ;
	
	// CHECKING FOR ERRORS IN READING
	if ( !inFile )
	{
		cout << " Error opening the file for reading! " ;
		exit (1) ;
	}  
	
	// READING DATA FROM THE FILE
	string line ;
    while ( getline ( inFile ,line ) )
	{
		cout <<  line << endl ;
	} 
	
	inFile.close () ;
	
    return 0 ;
}


