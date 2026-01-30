#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main ()
{
	string name ;
	int marks ;
	
	// OPENING THE FILE
	ofstream outFile ;
	outFile.open( "student.txt", ios::app ) ;
	
	// CHECKING FOR ERRORS
	if ( !outFile )
	{
		cout << " Error opening the file! " ;
		return 1 ;
	}  
	
	// ADDING NEW INFORMATION
	
	cout << " Enter the name of student : " ;
	getline ( cin , name ) ;
	
	cout << " Enter the marks of student : " ;
	cin >> marks ;
	
	outFile << " Name of student 4 : " << name << endl ;
	outFile << " Marks of student 4 : " << marks << endl ;
	
	outFile.close() ;
	
	cout << " New entry added successfully! " ;
	
	return 0 ;
	
}