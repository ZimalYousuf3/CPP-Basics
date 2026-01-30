#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib> // for exit()
using namespace std ;
int main ()
{
	const int MAX_DATA = 100 ;
	int count = 0 , arr[MAX_DATA] ;
	double sum = 0 , average = 0 ;
	
	// Reading data from input.txt
	ifstream inFile;
	inFile.open("input.txt") ;
	if (inFile)
	{
		while(inFile >> arr[count] && count < MAX_DATA) 
		count ++ ;
		
		for (int i=0 ; i<count ; i++)
		{
			sum += arr[i] ;
		}
		average = sum / count ;	
	} 
	
	else
	{
		cout << " Error! Could not read the file.";
		exit (1) ;
	}
	cout << " Data successfully read from the file. " << endl;
	inFile.close() ;
	
	// Writing data into output.txt
	ofstream outFile ;
	outFile.open("output.txt") ;
	if (outFile)
	{
		outFile << " Numbers read:" << count << endl ;
		outFile << " Total: " << sum << endl ;
		outFile << " Average: " << fixed << setprecision(2) << average << endl ;
		outFile << " Numbers: " ;
		for (int i=0 ; i<count ; i++)
		{
			outFile << arr[i] << " ";
		}
	} 
	else
	{
		cout << " Error! Could not write to the file.";
		exit (1) ;
	}
	outFile.close() ;
	cout << " Data successfully written to the file. " << endl;
	
	return 0 ;
}

