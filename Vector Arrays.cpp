#include <iostream>
#include <vector>
using namespace std ;

int main ()
{
	vector <int> vec ;
	// Adding elements into the vector
	vec.push_back(10) ;
	vec.push_back(20) ;
	vec.push_back(30) ;
	vec.push_back(40) ;
	vec.push_back(50) ;
	
	// Displaying the vector array
	cout << " Vector: " ;
	for (int displayBefore : vec)
	cout << displayBefore << " " ;
	cout << endl ;
	
	// Displaying vector size & capacity
	cout << " Size of vector: " << vec.size() << endl ;
	cout << " Capacity of vector: " << vec.capacity() << endl ;
	
	// Deleting the last element
	vec.pop_back() ;
	
	// Displaying vector array after pop back
	cout << " Vector after pop_back: " ;
	for (int displayAfter : vec)
	cout << displayAfter << " " ;
	cout << endl ;
	
	// Inserting element into vector array
	vec.insert( vec.begin() + 2 , 13 ) ;
	 
	// Displaying vector array after inserting element
	cout << " Vector after inserting element: " ;
	for (int displayInsert : vec)
	cout << displayInsert << " " ;
	cout << endl ;
	
	return 0 ;
}
