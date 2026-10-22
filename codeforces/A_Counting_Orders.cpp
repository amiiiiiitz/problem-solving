#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long MOD = 1000000007;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend());

    long long result = 1;

    for (int i = 0; i < n; i++) {
        long long temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        long long count = a.size() - temp;
        result = result * max(count - i, 0LL) % MOD;
    }

    cout << result << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
