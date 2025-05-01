#include <iostream>
using namespace std;

/* 
    A B C D
    A B C D
    A B C D
    A B C D
*/

int main() {
    int m;
    cout << "Enter the side of square: ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=m; j++) {
            cout << char(j+64) << "  ";
        }
        cout << endl;
    }
   
   return 0;
}