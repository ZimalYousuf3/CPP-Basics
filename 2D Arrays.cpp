#include <iostream>
using namespace std ;

const int ROWS = 3 ;
const int COLS = 3 ;

bool canAddMatrices(int r1, int c1, int r2, int c2) {
    if (r1 != r2 || c1 != c2) 
    {
        cout << "Error: Matrix dimensions do not match!\n";
        return false;
    }
    return true;
}

void displayMatrix ( int matrix [ROWS][COLS] )
{
	for ( int i=0 ; i<ROWS ; i++ )
	{
		for ( int j=0 ; j<COLS ; j++ )
		{
			cout << " " << matrix [i][j] << " " ;
		}
		cout << endl ;
	}
}

void addMatrix ( int A[ROWS][COLS] , int B[ROWS][COLS] , int result[ROWS][COLS] )
{
	for ( int i=0 ; i<ROWS ; i++ )
	{
		for ( int j=0 ; j<COLS ; j++ )
		{
			result [i][j] = A[i][j] + B[i][j] ;
		} 
	}
}

int main ()
{
	int matrix1[ROWS][COLS] = {
                                {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}
                                         };
	
    int matrix2[ROWS][COLS] = {
                                {9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}
                                         };	
	
	int sum[ROWS][COLS];

    cout << " Matrix 1:" << endl ;
    displayMatrix(matrix1);
    cout << endl ;

    cout << " Matrix 2:" << endl;
    displayMatrix(matrix2);
    cout << endl ;

    if (!canAddMatrices(ROWS, COLS, ROWS, COLS)) {
    return 0;
    }
    
    addMatrix(matrix1, matrix2, sum);
    cout << " Sum of matrices:" << endl ;
    displayMatrix(sum);

    return 0 ;
	
}

