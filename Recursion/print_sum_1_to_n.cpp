#include <iostream>
using namespace std;

int sum(int n) {
    if(n==1) return 1;
    return n + sum(n-1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int ans = sum(n);
    cout << ans << endl;
    return 0;
}