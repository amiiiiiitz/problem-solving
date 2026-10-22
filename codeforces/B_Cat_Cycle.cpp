#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n % 2 == 1) {
            k += (k - 1) / (n / 2);
        }

        cout << ((k - 1) % n + 1) << "\n";
    }
    return 0;
}
