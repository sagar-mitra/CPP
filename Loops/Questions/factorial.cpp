#include <iostream>
using namespace std;

int main() {
    int num, ans=1;
    cout << "Enter the number: ";
    cin >> num;

    for(int i=num; i>=1; i--) {
        ans *= i;
    }

    cout << "Factorial of " << num << " is: " << ans << endl;
    return 0;
}