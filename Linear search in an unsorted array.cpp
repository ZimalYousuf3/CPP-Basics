#include <iostream>
using namespace std;
int main()
{
	int arr[4] = {3,7,1,9} , key = 7 ;
	int i ;
	bool found = false ;
	for (i = 0 ; i <4 ; i++)
	{
		if(arr[i] == key)
		{
			found = true ;
		    break;
		}
	}
	
	cout<<(found? "Found!": "Not Found") ;
	
	return 0 ;
}