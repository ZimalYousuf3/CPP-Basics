#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main ()
{
	string name ;
	int age ;
	
	// Taking user input
	cout << " Enter your name: " ;
	getline(cin,name);
	cout << " Enter your age: " ;
	cin >> age ;
	
	// Opening the File for writing
	ofstream outFile;
	outFile.open("user_data.txt") ;
	
	// Writing to a File
	if ( outFile )
	{
		outFile << " Name: " << name << endl ;
		outFile << " Age: " << age << endl ;
	} 
	
	// Checking for error
	else
	{
		cout << " Error, Could not open the file for writing! " ;
		return 1 ;
	}
	
	cout << " Data written successfully! " << endl ;
	
	// Closing a file
	outFile.close() ;
	
	return 0 ;
}




