#include <iostream>
using namespace std;
int main()
{
	int n;
	int *ptr;
	ptr = &n ;
	cout << " Enter an integer: " ;
	cin >> n ;
	cout << " The value of integer = " << n << endl ; 
	cout << " The address of integer = " << ptr ;
}