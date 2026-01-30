#include <iostream>
using namespace std;
int main ()
{
	int a = 5, b = 5;

    cout << "Initial values: a = " << a << ", b = " << b << endl;

    // Postfix increment

    cout << "a++ = " << a++ << endl; // Prints 5, then a becomes 6

    cout << "After a++, a = " << a << endl;

    // Prefix increment

    cout << "++b = " << ++b << endl; // b becomes 6, then prints 6

    cout << "After ++b, b = " << b << endl;
    
    // Reset values

    a = 10; b = 10;

    cout << "\nReset values: a = " << a << ", b = " << b << endl;

    // Postfix decrement

    cout << "a-- = " << a-- << endl; // Prints 10, then a becomes 9

    cout << "After a--, a = " << a << endl;

    // Prefix decrement

    cout << "--b = " << --b << endl; // b becomes 9, then prints 9

    cout << "After --b, b = " << b << endl;

return 0;
}



