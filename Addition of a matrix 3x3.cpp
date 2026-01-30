#include<iostream>
using namespace std;
int main()
{
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3] = {{2,4,6},{1,3,5},{3,9,8}};
	int i , j , c[3][3] ;
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j] << "\t" ;
		}
		cout << endl ;
	}
	return 0 ;
}