#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0) {
        cout << "NO\n";
    } else if (a == 0 || b == 0) {
        if (abs(a - b) >= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        if (abs(a - b) <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}