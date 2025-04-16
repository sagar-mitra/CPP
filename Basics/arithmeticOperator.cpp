#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;

    cout << "a + b = " << a + b << endl; // 13
    cout << "a - b = " << a - b << endl; // 7
    cout << "a * b = " << a * b << endl; // 30
    cout << "a / b = " << a / b << endl; // 3 (integer division)
    cout << "a % b = " << a % b << endl; // 1

    // Increment and Decrement
    cout << "++a = " << ++a << endl; // 11 (Pre-increment)
    cout << "a++ = " << a++ << endl; // 11 (Post-increment, returns old value)
    cout << "a = " << a << endl;     // 12

    cout << "--b = " << --b << endl; // 2 (Pre-decrement)
    cout << "b-- = " << b-- << endl; // 2 (Post-decrement, returns old value)
    cout << "b = " << b << endl;     // 1

    // Division (/) of integers truncates the decimal part. Use floats if you want the full result.
    float x = 10, y = 3;
    cout << "x / y = " << x / y; // Output: 3.33333

    return 0;
}
