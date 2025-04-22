#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter num: ";
    cin >> num;

    num%2 == 0 ? cout << num << " is a even number" : cout << num << " is a odd number";

    return 0;
}