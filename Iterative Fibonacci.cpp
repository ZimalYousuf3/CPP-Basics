#include <iostream>
using namespace std;

int fibonacciIterative (int n)
{
	// Base Cases
	if (n==0)
	return 0 ;
	
	else if (n==1)
	return 1 ;
	
	// Iterative Case
	else
	{
		int prev1 = 0 , prev2 = 1 , current ;
		for (int i = 1 ; i < n ; i++)
		{
			current = prev1 + prev2 ;
			prev1 = prev2 ;
			prev2 = current ;
		}
		return current ;
	}
}

int main ()
{
	int n ;
	cout << " Enter the terms : " ;
	cin >> n ;
	
	cout << " Fibonacci Sequence : " ; 
	for (int i = 0 ; i < n ; i++)
	{
		cout << " " << fibonacciIterative (i) << " " ;
	}
	
	return 0 ;
}