#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x=4, y=0;

    while(x >= 0) {
        x--;
        y++;

        if(x==y) {
            continue;
        } else {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}