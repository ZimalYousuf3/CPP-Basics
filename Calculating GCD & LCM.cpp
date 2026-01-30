#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
	int a = 15 , b = 20 , g , lcm ;
	g = gcd (a,b) ;
	lcm = (a*b)/g ;
	cout << " GCD = "<< g << endl ;
	cout << " LCM = " << lcm ;
	return 0 ;
}

int gcd(int a, int b)
{
	int temp;
	while (b!=0)
	{
		temp = b ;
		b = a% b ;
		a = temp ;
	}
	return a ;
}