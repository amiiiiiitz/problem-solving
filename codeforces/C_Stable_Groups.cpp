#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, x; 
    cin >> n >> k >> x;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    vector<ll> gaps;
    for (ll i = 1; i < n; i++) {
        ll diff = a[i] - a[i - 1];
        if (diff > x) {
            ll need = (diff - 1) / x;
            gaps.push_back(need);
        }
    }

    sort(gaps.begin(), gaps.end());

    ll ans = 1 + gaps.size();
    for (ll g : gaps) {
        if (k >= g) {
            k -= g;
            ans--;
        } else break;
    }

    cout << ans << "\n";
    return 0;
}
