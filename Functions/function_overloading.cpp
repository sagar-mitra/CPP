#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

double square(double x) {
    return x * x;
}

int main() {
    cout << square(5) << endl;       // Calls int version
    cout << square(3.14) << endl;    // Calls double version
    return 0;
}
