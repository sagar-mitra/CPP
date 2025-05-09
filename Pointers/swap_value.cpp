#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
   int x = 12, y = 40;

   cout << x << endl; // Output: 12
   cout << y << endl; // Output: 40

   swap(&x,&y);

   cout << x << endl; // Output: 40
   cout << y << endl; // Output: 12

   return 0;
}