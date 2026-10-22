#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        if (k > 2) {
            cout << 0 << '\n';
            continue;
        }

        sort(a.begin() + 1, a.end());
        ll ans = a[1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                ll x = a[i] - a[j];
                ans = min(ans, x);

                if (k == 2) {
                    int y = lower_bound(a.begin() + 1, a.end(), x) - a.begin();

                    if (y <= n) ans = min(ans, abs(a[y] - x));
                    if (y > 1) ans = min(ans, abs(x - a[y - 1]));
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
