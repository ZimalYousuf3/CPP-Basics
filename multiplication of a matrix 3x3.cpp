#include<iostream>
using namespace std;
int main()
{
	int a[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} } ;
	int b[3][3] = { {4,1,5} , {3,4,1} , {0,3,2} } ;
	int i , j , k , c[3][3] ;
	
	for( i=0 ; i<3 ; i++ )
	{
		for( j=0 ; j<3 ; j++ )
		{
		   c[i][j] = 0 ;
		   for ( k=0 ; k<3 ; k++ )
		   {
		   	 c[i][j] += a[i][k] * b[k][j] ;
		   }
		   cout << " " << c[i][j] << " " ;
		}
		cout << endl ;
	}
}