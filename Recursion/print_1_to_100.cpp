#include <iostream>
using namespace std;

void printNumbers(int m, int n) {
    if (m > n) return;
    cout << m << endl;
    printNumbers(m + 1, n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printNumbers(1, n);
    return 0;
}