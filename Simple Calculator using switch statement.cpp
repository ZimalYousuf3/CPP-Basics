#include <iostream>
using namespace std;
int main()
{
	char op;
	int n1 , n2 ;
	
	cout << " Enter the two numbers: " ;
	cin >> n1 >> n2 ;
	
	cout << " Enter the operator: " ;
	cin >> op ;
	
	switch(op)
	{
		case'+':
			cout << n1 + n2 << endl ;
			break ;
			
		case'-':
		    cout << n1 - n2 << endl ;
			break ;
			
		case'*':
		    cout << n1 * n2 << endl ;
			break ;
			
		case'/':
		    cout << n1 / n2 << endl ;
			break ;
			
		case'%':
			cout << n1 % n2 << endl ;
			break ;
				
	    default:
		    cout << " Invalid operator! " ;				
	}
	return 0 ;
}