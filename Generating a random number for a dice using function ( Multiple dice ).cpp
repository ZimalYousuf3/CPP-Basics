#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rolldice();

int main()
{
	int i ;
	srand (time(0)) ;
	cout << " Rolling a dice 5 times:- " << endl ;
	for( i=0 ; i<5 ; i++ )
	{
		cout << " You rolled "<< rolldice() << endl ;
	}
	return 0 ;
}

int rolldice()
{
	return rand() % 6 + 1;
}
 