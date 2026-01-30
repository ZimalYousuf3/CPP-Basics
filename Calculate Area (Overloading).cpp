#include <iostream>
#include <iomanip>
using namespace std ;

// function for Area of Circle
double calculateArea ( double radius )
{	
	return 2 * (3.14) * radius ;
}

// function for Area of Rectangle
double calculateArea ( double length, double width )
{	
	return length * width ;
}

int main ()
{
	cout << fixed << setprecision(2) ;
	
	// Calculating Area of Circle
	double radius = 2.8 ;
	double circleArea = calculateArea (radius) ;
	cout << " Area of circle with radius " << radius << " is "<< circleArea << " square units. " << endl ;
	
	// Calculating Area of Rectangle
	double length = 4.5 , width = 5.5 ;
	double rectangleArea = calculateArea ( length,width ) ;
	cout << " Area of Rectangle is "<< rectangleArea << " meters. " << endl ;
	
	// Checking with other examples
	
	cout << " Area of circle (r=4.8) = " << calculateArea (4.8) << endl ;
    cout << " Area of Rectange (l=6 ,w=2) = " << calculateArea (6,2) ;
}






 