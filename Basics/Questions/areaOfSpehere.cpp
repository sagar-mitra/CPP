#include <iostream>
#include <cmath> // for M_PI and pow

using namespace std;

int main() {
    double radius, area;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Formula: Area = 4 * π * r^2
    area = 4 * M_PI * pow(radius, 2);

    cout << "The surface area of the sphere is: " << area << endl;

    return 0;
}
