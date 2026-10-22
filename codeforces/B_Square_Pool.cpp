#include <iostream>
#include <limits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, s;
        cin >> n >> s;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int d1, d2, x, y;
            cin >> d1 >> d2 >> x >> y;

            if (x == y && d1 == d2) cnt++;
            if (x + y == s && d1 != d2) cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
