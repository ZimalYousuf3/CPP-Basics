#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int no_of_pizzas , no_of_toppings ;
	const float price_of_pizza = 10.00 , topping_cost = 1.50 , tax_rate = 0.0875;
		
	cout << " Enter the no. of pizzas : "; 
	cin >> no_of_pizzas ;
	cout << " Enter the no. of toppings : ";
	cin >> no_of_toppings;
	
	// Calculating subtotal
	float subtotal = ( (no_of_pizzas * price_of_pizza) + (no_of_toppings * topping_cost) ) ; 
	cout << " Your subtotal is $ " << subtotal << setprecision(2) << "." << endl ;
	
	// Calculating  sales tax
	float tax = (subtotal * tax_rate) ;  
	cout << " Amount of Sales Tax on items is $ " << fixed << setprecision(2) << tax << "." << endl ;
	
	// Calculating Final total
	float final_total = subtotal + tax ; 
	cout << " Your Final Total is $ " << fixed << setprecision(2) << final_total << "." ;
	return 0 ;
} 










