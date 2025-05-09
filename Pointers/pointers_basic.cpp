#include <iostream>
using namespace std;

int main()
{
   int x = 12;
   int* p = &x; // Declare a pointer 'p' and initialize it with the address of variable 'x'

   cout << p << endl; // Output: 0x61ff08
   cout << &x << endl; // Output: 0x61ff08
   cout << *p << endl; // Output : 12
   cout << x << endl; // Output : 12
   return 0;
}