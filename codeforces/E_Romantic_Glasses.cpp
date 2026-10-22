#include <iostream>
#include <set>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        set<ll> s;
        s.insert(0);

        ll sum = 0;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            if (i % 2 == 0) sum -= x;
            else sum += x;

            s.insert(sum);
        }

        cout << (s.size() == n + 1 ? "NO" : "YES") << endl;
    }
}
