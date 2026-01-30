#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std ;

int main ()
{
	const int size = 5 ;
	double scores[size] ;
	double newScores[size] , sum = 0 , average = 0 ;
	
	ofstream outFile ;
	outFile.open("scores.txt") ;
	if (outFile)
	{
		cout << " Enter the scores of 5 students:" << endl;
		for (int i=0 ; i<size ; i++)
		{
			cout << " Enter the score of student " << i << " : " ;
			cin >> scores[i] ;
			
			outFile << " Score of student " << i << " : " << scores[i] << endl ;
			
			sum += scores [i] ;
		}
		average = sum / 2 ;
	} 
	
	else
	{
		cout << " Error! Could not open the file." ;
		return 1 ;
	}
	
	ifstream inFile ;
	inFile.open("scores.txt") ;
	if (inFile)
	{
		while (inFile >> scores)
		{
			newScores[size] = scores ; 
		}
	}
	
	ofstream outFile ;
	outFile.open("scores.txt") ;
	if (outFile)
	{
		outFile << " Student Records " << endl ;
		for (int i=0 ; i<size ; i++)
		{
			outFile << " Student " << i << " : " << newScores[i] ;
		}  
	} 
	
	return 0 ;
	
}