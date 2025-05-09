#include <iostream>
using namespace std;

int main() {
    int x = 42;            
    int *p = &x; // Pointer 'p' stores the address of variable 'x'

    cout << "Address of x: " << &x << endl; // Prints the address of 'x'
    cout << "Value of p (address stored): " << p << endl; // Prints the same address as above
    cout << "Value pointed to by p: " << *p << endl; // Output: 42


    *p = 100; // Change the value of 'x' through the pointer
    cout << "New value of x: " << x << endl;    // Output: 100

    return 0;
}   
