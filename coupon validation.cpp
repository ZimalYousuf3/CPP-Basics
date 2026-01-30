#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string entered_code ;
	bool coupon = false ;
	bool valid = false ;
	
	cout << " Do you have any coupon ? ( Enter 1 for YES : 0 for NO ) : " ;
	cin >> coupon ;
	
	if ( coupon == true )
	{
		do{
			cout << " Enter the coupon code (ALL CAPS & NO SPACES): " ;
		    cin >> entered_code ;
		
		if ( entered_code == "FREESHIPPING")
		{
			valid = true ;
			cout << " CONGRATS! You will avail freeshipping on your order. " << endl ;
		}
		
		else if ( entered_code == "DISCOUNT10")
		{
			valid = true ;
			cout << " CONGRATS! You will avail 10% discount on your order. " << endl ;
		}
		
		else if ( entered_code == "DISCOUNT30")
		{
			valid = true ;
			cout << " CONGRATS! You will avail 30% discount on your order. " << endl ;
		}
		
		else
		{
			cout << " Invalid coupon, try again." << endl ;
		}
			
		} while (valid!=true) ;
	}
	else 
	{
		cout << " Thank you for Shopping! " << endl ;
	}
	return 0 ;
}