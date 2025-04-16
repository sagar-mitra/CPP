#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radius;

    // Taking the value of the radius from the user
    cout << "Enter the radius: ";
    cin >> radius;

    // Calculating area
    float area = M_PI * radius * radius;

    cout << "Area of circle: " << area;


}