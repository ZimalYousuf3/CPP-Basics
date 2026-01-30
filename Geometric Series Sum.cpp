#include <iostream>
using namespace std;
int main()
{
	int sum = 0 , term = 2 ;
	
	for ( int i=1 ; i<=10 ;i++ )
	{
		sum = sum + term ;
		term = 2 * term ;
	}
	cout << " Sum = " << sum ;
	
	return 0 ;
}