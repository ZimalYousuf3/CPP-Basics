#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
	float num1 , num2 ;
	char op ;
	
	cout << " Enter the two numbers : " ;
	cin >> num1 >> num2 ;
	
	cout << " Enter the operator: " ;
	cin >> op ;
	cout << endl ;
	
	switch ( op )
	{
		case '+' :
			cout << right << setw(10) << num1 << " + " << num2 << " = " << num1 + num2 << endl ;
			break ;
		
		case '-' :
			cout << right << setw(10) << num1 << " - " << num2 << " = " << num1 - num2 << endl ;
			break ;
			
		case '*' :
			cout << right << setw(10) << num1 << " x " << num2 << " = " << num1 * num2 << endl ;
			break ;
		
		case '/' :
			if (num2 == 0)
			{
				cout << " Divisor is zero! " << endl ;
			}
			else
			{
				cout << right << setw(10) << num1 << " / " << num2 << " = " << num1 / num2 << endl ;
			}
			break ;
		
		default :
		    cout << " INVALID OPERATOR! " ;				
	}
	
	return 0 ;
}
