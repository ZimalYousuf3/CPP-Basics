#include <iostream>
using namespace std ;
int main ()
{
	int age ;
	bool hasID = false ;
	
	cout << " Enter your age : " ;
	cin >> age ;
	
	if ( age >= 13 && age <= 19 )
	   {
		 cout << " You are a teenager. " << endl ;
       }

	cout << " Do you have an ID? ( 1 for YES and 0 for NO ) :  " ;
	cin >> hasID ;
	
	if ( age >= 18 && hasID == true )
	{
		cout << " You are eligible to vote! " << endl ;

		if ( age >= 65 )
		{
			cout << " You will get a senior discount. " << endl ;
		}
    }
    else
    {
    	cout << " You are not eligible to vote! " << endl ;
	}
    
	cout << " Thank you! " ;
	
	return 0 ;
}


