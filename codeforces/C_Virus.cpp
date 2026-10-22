#include <bits/stdc++.h>
using namespace std;

int a[100009], b[100009];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= m; ++i) cin >> a[i];
        sort(a + 1, a + m + 1);

        for (int i = 1; i < m; ++i) b[i] = a[i + 1] - a[i] - 1;
        b[m] = a[1] + n - a[m] - 1;

        sort(b + 1, b + m + 1);

        int ans = 0, j = 0;
        for (int i = m; i > 0; --i) {
            if (b[i] - j <= 0) break;
            if (b[i] - j <= 2) ++ans;
            else ans += b[i] - j - 1;
            j += 4;
        }

        cout << n - ans << '\n';
    }
}
