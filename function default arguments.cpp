#include <iostream>
using namespace std ;
 
void greet (string name , string prefix = " Ms.") 
 {
   cout << " Hello " << prefix << name << endl ;
 }
 int main ()
 {
 	greet ("Fajar","Dr.") ;
 	greet ("Zimal") ;
 	greet ("Ghana","Dr.") ;
    
    return 0 ;
 }
 
 