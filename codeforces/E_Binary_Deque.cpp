#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,s; cin >> n >> s;

        vector<int> a(n);
        int c = 0, op = -1;;

        for (int i = 0, j = 0; i < n; i++) {
            cin >> a[i];
            c += a[i];
            if (c > s) c -= a[j++];
            if (c == s) op = max(op, i - j + 1);
        }

        int ans = n - op;
        if (op < s || (n - op) > n) ans = -1;
        cout << ans << "\n";
    }
}
