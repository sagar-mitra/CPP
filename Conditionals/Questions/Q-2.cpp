#include <iostream>
using namespace std;

//If cost price and selling price of an item input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

int main() {
    int cp,sp;

    cout << "Enter CP: ";
    cin >> cp;

    cout << "Enter SP: ";
    cin >> sp;

    if(sp>cp) {
        cout << "He made a profit of Rs." << sp-cp << endl;
    } else if(sp == cp) {
        cout << "No profit & No loss" << endl;
    } else {
        cout << "He made a loss of Rs." << -(sp-cp) << endl;
    }

    return 0;
}