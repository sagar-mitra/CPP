#include <iostream>
using namespace std;

/*
    1
    A B
    1 2 3
    A B C D
*/

int main() {
    int m;
    cout << "Enter the total rows: ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            if(i%2 != 0) {
                cout << j << " ";
            } else {
                cout << char(j+64) << " ";
            }
        }
        cout << endl;
    }
   
   return 0;
}