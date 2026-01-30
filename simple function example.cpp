#include <iostream>
using namespace std ;

	int add ( int x , int y ) 
 {
	
	return x + y ; 
 } 


	int subtract (int p , int q )
 {	
    return p - q ;
 }

 int main ()
 {
 	cout << " Sum : " << add (10,8) << endl ;
 	cout << " Subtraction : " << subtract (10,8) << endl ;
 	
 	return 0 ;
 }