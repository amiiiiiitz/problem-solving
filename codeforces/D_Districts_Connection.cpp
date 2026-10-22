#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n + 1);
        
        ll z = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] != a[1]) z = i;
        }
        if (z == 0) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            for (int i = 2; i <= n; i++) {
                if (a[i] != a[1]) cout << 1 << ' ' << i << '\n';
                else cout << z << ' ' << i << '\n';
            }
        }
    }
    return 0;
}
