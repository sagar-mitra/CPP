#include <iostream>
using namespace std;

int multiply(int a, int b = 2) {
    return a * b;
}

int main() {
    cout << multiply(5) << endl;     // Uses default b=2
    cout << multiply(5, 3) << endl;  // Uses b=3
    return 0;
}
