#include <iostream>
using namespace std ;
int main ()
{
	int rows = 4 , cols = 3 , sum = 0 ;
	
	int matrix[rows][cols] = { {1,2,3} , {4,5,6} , {7,8,9} , {10,11,12} } ;
	
	for (int i=0 ; i<rows ; i++ )
	{
		for(int j=0 ; j<cols ; j++ )
		{
			sum+= matrix[i][j] ;
		}
	}
	
	cout << " Sum = " << sum ;
	
	return 0 ;
	
}