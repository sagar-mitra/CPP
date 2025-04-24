#include <iostream>
using namespace std;

// Question: Print all the even numbers from 1 to 100.

int main()
{
    // In this case loop will run 100 times
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    // This time loops will run 50 times
    for(int i=2; i<=100; i=i+2) {
        cout << i << " ";
    }

    return 0;
}