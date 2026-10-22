#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll ans = 0;
    ll total_sum = accumulate(v.begin(), v.end(), 0LL);
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += v[i];
        ans = max(ans, gcd(total_sum - sum, sum));
    }
    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
