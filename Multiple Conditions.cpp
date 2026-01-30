#include <iostream>
using namespace std ;
int main ()
{
	int score ;
	cout << " Enter you test score: " ;
	cin >> score ;
	
	if ( score >= 0 && score <= 100 )
	{
		cout << " Valid score. " << endl ;
        
        if ( score == 100 )
        {
        	cout << " Perfect score! " << endl ;
		}
	}
	
	return 0 ;

}
