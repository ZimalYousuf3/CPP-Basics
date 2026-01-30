#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
int main ()
{
	// WRITING THE DATA IN FILE
	ofstream outFile ;
	outFile.open("data.txt") ;
	outFile << " HELLO WORLD " << endl ;
	outFile << " 42 " << endl ;  
	outFile.close() ;
	
	if (!outFile)
	{
		cout << " Error while opening a file! " << endl ;
		return 1 ;
	}
	else 
	{
		cout << " Data saved successfully " << endl ;
	}
	
	// READING THE DATA FROM THE FILE
	ifstream inFile ;
	inFile.open("data.txt") ;
	string line ;
	int number ; 
	getline (inFile , line ) ;
	inFile >> number ;
	inFile.close() ;
	
	cout << " Line : " << line << endl ;
	cout << " Number : " << number << endl ;
	
}