#include <iostream>
using namespace std ;
int main () 
{
	const int size = 5 ;
	float sum = 0 , avg = 0 ;
	int grade [size] ;
	
	// Input Grades
	cout << " Enter grades of 5 students:-" << endl ;
	for ( int i=0 ; i<size ; i++ )
	{
		cout << " Grade of student " << i+1 << " = " ;
		cin >> grade [i] ;
	}
	
	// Calculating Sum of Grades
	for ( int i=0 ; i<size ; i++ )
	{
		sum += grade [i] ;
	}
	
	// Calculating Average 
	avg = sum / size ;
	
	// Calculating Highest and lowest grade
	float highest = grade [0] ;
	float lowest = grade [0] ;
	
	for ( int i=0 ; i<size ; i++ )
	{
		if (grade[i] > highest)
		highest = grade [i] ;
		
		if (grade[i] < lowest)
		lowest = grade [i] ;
	}

	// Displaying Result
	cout << " ---- REPORT ---- " << endl ;
	cout << " Grades of students:- " << endl ;
	
	for ( int i=0 ; i<size ; i++ )
	{
		cout << grade [i] << " " ;
	}
	cout << endl ;
	
	cout << " Sum of grades = " << sum << endl ;
	cout << " Average = " << avg << endl ;
	cout << " Highest grade = " << highest << endl ;
	cout << " Lowest grade = " << lowest << endl ;
	
	return 0 ;
}


