#include <iostream>
using namespace std ;

int binarySearch (int arr[], int size, int key)
{
	int left = 0 , right = size - 1 ;
	
	while (left <= right)
	{
		int mid = left + (right-left) / 2 ;
		
		if (arr[mid] == key)
		return mid ;
		
		else if (arr[mid] < key)
		left = mid + 1 ;
		
		else
		right = mid - 1 ;
	} 
	return -1 ;
}

int main ()
{
	const int size = 5 ;
	int key ;
	int sortedArray[size] = { 1,2,3,4,5 } ;
	
	cout << " Enter the value for searching: " ;
	cin >> key ;
	
	int result = binarySearch(sortedArray,size,key);
	
	if (result!=-1)
	{
		cout << " Value found at index " << result << endl ;
	}
	else
	{
		cout << " Value not found!" << endl ;
	}
	return 0 ;
}


