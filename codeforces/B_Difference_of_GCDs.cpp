#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll l, r;
    cin >> l >> r;

    vector<ll> ans;

    for (int i = 1; i <= n; i++) {
        ll temp = ((l + i - 1) / i) * i;
        ans.push_back(temp);

        if (temp > r) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    for (ll val : ans) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
