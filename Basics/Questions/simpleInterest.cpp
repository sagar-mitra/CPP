#include <iostream>
using namespace std;

int main()
{
    float P, R, T;

    cout << "Enter the value for P(Initial Amount): ";
    cin >> P;

    cout << "Enter the value for R(Interest Rate): ";
    cin >> R;

    cout << "Enter the value for T(Time in Years): ";
    cin >> T;

    float SI = (P * R * T) / 100;

    cout << "Simple Interest is: " << SI << endl;
}