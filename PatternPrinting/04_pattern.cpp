#include <iostream>
using namespace std;

/* 
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4 
*/

int main() {
    int m,n;
    cout << "Enter the total rows: ";
    cin >> m;
    cout << "Enter the total column: ";
    cin >> n;

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
   
   return 0;
}