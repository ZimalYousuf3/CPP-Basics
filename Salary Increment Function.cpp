#include <iostream>
#include <iomanip>
using namespace std ;

double giveRaise ( double &salary , double raisePercentage ) // Taking employee's salary as reference parameter.
{
	salary = salary * ( 1 + raisePercentage /100.0 ) ; // Formula for raise
	return salary ;
}

int main ()
{
	cout << fixed << setprecision (2) ; // Using setprecision for confining the output to 2 decimal places.
	
	double employeeSalary = 45000 ;
	double raisePercentage = 20.0 ;
	
	cout << " Employee's Original Salary = " <<  employeeSalary << endl ;
	
	giveRaise (employeeSalary,raisePercentage) ;
	cout << " Employee's Salary after " << raisePercentage << " % = " << employeeSalary << endl ;
	
	// Testing the function with different salary values and raise percentages.
	
	double managerSalary = 55000 ;
	raisePercentage = 15.0 ;
	
	cout << " Manager's Original Salary = " <<  managerSalary << endl ;
	
	giveRaise (managerSalary,raisePercentage) ;
	cout << " Manager's Salary after " << raisePercentage << " % = " << managerSalary << endl ;
	
	double juniorSalary = 40000 ;
	raisePercentage = 10.0 ;
	
	cout << " Junior's Original Salary = " <<  juniorSalary << endl ;
	
	giveRaise (juniorSalary,raisePercentage) ;
	cout << " Junior's Salary after " << raisePercentage << " % = " << juniorSalary << endl ;
	
	return 0 ;
		
}


