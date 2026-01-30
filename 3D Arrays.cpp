#include <iostream>
using namespace std ;
int main ()
{
	int rows = 2, cols = 3, channels = 3 ;
	int image [rows][cols][channels] = {
	                                    { // Row 0
	                                    { 255,0,0} , // Red
										{0,  255,0} , // Green      
										{0,0, 255} 
										}, // Blue
										{ // Row 1
	                                    {255,255,0} , // Yellow
										{255,0,255} , // Magenda      
										{0,255,255} 
										} // Cyan
									   } ;
	
	cout << " 3D Array RGB Image " << endl ;
	for (int i=0; i<rows; i++)
	{
		cout << "Row " << i << endl;
		for (int j=0; j<cols; j++)
		{
			cout << " Pixel " << j << "(RGB Image):" ;
			for (int k=0; k<channels; k++)
			{
				cout << image[i][j][k] ;
			}
			cout << "\t" ;
	    }
		cout << endl ;							  
    }								   
    return 0 ;									   
}


