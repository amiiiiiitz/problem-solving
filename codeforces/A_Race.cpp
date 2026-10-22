
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;

        bool canWin = false;

        for (int b = 1; b <= 100; b++) {
            if (b == a) continue;

            int dist_b_x = abs(b - x);
            int dist_b_y = abs(b - y);
            int dist_a_x = abs(a - x);
            int dist_a_y = abs(a - y);

            if (dist_b_x < dist_a_x && dist_b_y < dist_a_y) {
                canWin = true;
                break;
            }
        }

        cout << (canWin ? "YES" : "NO") << endl;
    }
    return 0;
}
