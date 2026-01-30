#include <iostream>
using namespace std ;

long long factorialRecursive (int n)
{
	// Base Case
	if (n==0 || n==1)
	return 1 ;
	
	// Recursive Case
	else
	{
		return n * factorialRecursive (n-1) ;
	}
}

int main ()
{
	int n ;
	cout << " Enter a number: " ;
	cin >> n ;
	
	if (n<0)
	{
		cout << " Factorial is undefined for negative values! "<< endl;
	}
	else
	{
		cout << n << "! = " << factorialRecursive (n) << endl ;
	}
	return 0 ;
} 