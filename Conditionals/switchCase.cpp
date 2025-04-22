#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout << "Enter value for a: ";
    cin >> a;
    
    cout << "Enter value for b: ";
    cin >> b;

    char symbol;

    cout << "Which operation you want to do(+,-,*,/): ";
    cin >> symbol;

    switch (symbol) {
        case '+' :
        cout << a+b;
        break;

        case '-':
        cout << a-b;
        break;

        case '*':
        cout << a*b;
        break;

        case '/':
        cout << a/b;
        break;

        default:
        cout << "Invalid operator";
    }

    return 0;
}