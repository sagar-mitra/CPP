#include <iostream>
using namespace std;

/*
    1
    1 2
    1 2 3
    1 2 3 4
*/

int main() {
    int m;
    cout << "Enter the total rows: ";
    cin >> m;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
   
   return 0;
}