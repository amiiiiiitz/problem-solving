#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

ll solve() {
    ll n;
    cin >> n;

    ll part1 = (n * (n + 1)) % mod;
    ll part2 = (4 * n - 1 + mod) % mod;
    ll part3 = (part1 * part2) % mod;
    ll ans = (part3 * 337) % mod;

    cout << ans << "\n";
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
