#include <iostream>
using namespace std;
int main()
{
	const double SALES_TAX = 0.0875;//Constant declaration
	double salePrice = 95.99;
	double total = salePrice + (salePrice * SALES_TAX);
	
	cout << "The total is: $" << total << endl;
}