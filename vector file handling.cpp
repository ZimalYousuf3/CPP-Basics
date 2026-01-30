#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std ;

int main ()
{
	vector <int> sampleData = {75, 80, 72, 95, 88, 79, 81, 74, 90, 85} ;
	vector <int> temperatures ;
	int count = 0 ;
	
	ofstream outFile ;
	outFile.open("hot_days.txt") ;
	if (outFile)
	{
		outFile << "---- Temperatures ----" << endl ;
		for (int i=0 ; i<10 ; i++)
		{
			if (sampleData[i] > 85)
			{
				outFile << " "<< i+1 << ". " << sampleData[i] << endl ;
				count ++ ; 
			}
		}
	}
	else
	{
		cout << " Error! Cannot write to the file.";
		exit(1) ;
	}
	outFile.close() ;
	cout << " Data written successfully. " << endl ;
	
	int readTemp ;
	ifstream inFile ; 
	inFile.open("hot_days.txt") ;
	if (inFile)
	{
		while (inFile >> readTemp) 
		{
			temperatures.push_back(readTemp) ;
		}
	}
	else
	{
		cout << " Error! Cannot read the file.";
		exit(1) ;
	}
	inFile.close() ;
	cout << " Data read successfully. " << endl ;
	
	cout << count << " hot days were recorded." << endl ;
	
	return 0 ;
}