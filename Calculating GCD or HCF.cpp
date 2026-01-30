#include <iostream>
using namespace std;

int gcd (int a , int b);

int main()
{
	int a = 48 , b = 18 , result ;
	result = gcd(a,b) ;
	cout << " GCD of "<< a << " & "<< b << " is " << result ;
	return 0 ;
}
int gcd (int a , int b)
{
	int temp;
	while (b!=0)
	{
		temp = b ;
		b = a % b ;
		a = temp ; 
	}
	return a ;
}