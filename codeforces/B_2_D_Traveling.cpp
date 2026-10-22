#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n, k, s, t;
    cin >> n >> k >> s >> t;

    vector<long long> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }

    long long ans = abs(x[s] - x[t]) + abs(y[s] - y[t]);
    long long mins = 1e17, mint = 1e17;

    for (int i = 1; i <= k; i++) {
        mins = min(mins, abs(x[s] - x[i]) + abs(y[s] - y[i]));
        mint = min(mint, abs(x[t] - x[i]) + abs(y[t] - y[i]));
    }

    ans = min(ans, mins + mint);
    cout << ans << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
