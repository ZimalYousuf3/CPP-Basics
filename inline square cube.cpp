#include <iostream>
using namespace std;

// Inline function for square
inline int square(int x) {
    return x * x;
}

// Inline function for cube
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num = 5;
    cout << " Number: " << num << endl;
    
    // Compiler may replace square(num) with (num * num)
    cout << " Square: " << square(num) << endl; 
    
    cout << " Cube: " << cube(num) << endl;

    return 0;
}
