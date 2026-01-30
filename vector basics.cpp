#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
	vector <int> vec = {1, 2, 3} ;
	cout << " " << vec [0] << endl ;
	cout << " " << vec [1] << endl ;
    cout << " " << vec [2] << endl ;
    cout << " Size: " << vec.size() << endl ; // USED FOR FINDING SIZE OF VECTOR
    
    cout << " Vector: " ;
    for ( int display : vec )
    cout << display << " " ;
    cout << endl ;
    
    vec.push_back(13) ; // USED FOR ADDING ANY VALUE AT THE END 
    cout << " Size after push back: " << vec.size() << endl ;
    
    cout << " Vector after push back: " ;
    for ( int display : vec )
    cout << display << " " ;
    cout << endl ;
    
    vec.pop_back() ; // DELETING THE LAST VALUE
    cout << " Size after pop back: " << vec.size() << endl ; 
    
    cout << " Vector after pop back: " ;
    for ( int display : vec )
    cout << display << " " ;
    cout << endl ;
    
    cout << " " << vec.front() << endl ; // DISPLAY 1ST VALUE OR VALUE AT THE FRONT
    cout << " " << vec.back() << endl ; // DISPLAY THE LAST VALUE
    
    return 0 ;
}