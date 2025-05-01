#include <iostream>
using namespace std;

// Rows and Columns should be same. Eg: rows: 4, cols: 4

int main() {
    int m,n;
    cout << "Enter the total rows: ";
    cin >> m;
    cout << "Enter the total cols: ";
    cin >> n;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << "*  ";
        }
        cout << endl;
    }
   
   return 0;
}