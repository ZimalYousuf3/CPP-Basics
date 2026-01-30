#include <iostream>
using namespace std ;
int main ()
{
	int score ;
	cout << " Enter the score: " ;
	cin >> score ;
	
	if ( score >=0 && score <= 100 )
	{
	   cout << " Valid score." << endl ;
	  
	  if ( score >= 90 )
	  {
	  	cout << " Excellent Score! " << endl ;
	  }
	  
	  else if ( score >= 75 )
	  {
	  	cout << " Good Score! " << endl ;
	  }
	  
	  else if ( score >= 50 )
	  {
	  	cout << " Average Score! " << endl ;
	  }
	  
	  else 
	  {
	  	cout << " Poor Score! " << endl ;
	  }
	  return 0 ;
    }
      
} 



