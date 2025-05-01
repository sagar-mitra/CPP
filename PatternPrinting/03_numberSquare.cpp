#include <iostream>
using namespace std;

// Rows and Columns should be same. Eg: rows: 4, cols: 4

int main() {
    int m,n;
    cout << "Enter the total rows: ";
    cin >> m;
    cout << "Enter the total column: ";
    cin >> n;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            cout << j << "  ";
        }
        cout << endl;
    }
   
   return 0;
}