#include <bits/stdc++.h>
using namespace std;

long long calculateSumOfFirstX(int x) {
    return 1LL * x * (x + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        long long k, x; cin >> k >> x;

        long long lo = 1, hi = 2 * k - 1, ans = 2 * k - 1;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            long long cnt;

            if (mid >= k) {
                cnt = calculateSumOfFirstX(k) 
                    + calculateSumOfFirstX(k - 1) 
                    - calculateSumOfFirstX(2 * k - 1 - mid);
            } else {
                cnt = calculateSumOfFirstX(mid);
            }

            if (cnt >= x) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << ans << "\n";
    }
}
