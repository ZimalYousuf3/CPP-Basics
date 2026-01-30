#include <iostream>
using namespace std;

void display(int matrix[3][3], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << " " << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int matrix[3][3], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = i + 1; j < cols; j++)  // Start from i+1 to avoid swapping twice
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main()
{
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    cout << " Original Matrix" << endl;
    display(matrix, 3, 3);
    
    cout << " Transpose of Matrix" << endl;
    transpose(matrix, 3, 3);
    display(matrix, 3, 3);  // Display after transpose
    
    return 0;
}
