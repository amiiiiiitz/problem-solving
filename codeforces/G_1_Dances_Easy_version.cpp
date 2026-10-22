#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n], b[n];

        for (int i = 0; i < n - 1; i++) cin >> a[i];

        for (int i = 0; i < n; i++) cin >> b[i];

        a[n - 1] = 1;

        sort(a, a + n);
        sort(b, b + n);

        int j = 0;

        for (int i = 0; i < n; i++) {
            if (b[i] > a[j]) j++;
        }

        cout << n - j << "\n";
    }

    return 0;
}
