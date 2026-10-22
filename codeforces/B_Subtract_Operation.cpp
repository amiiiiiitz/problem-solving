#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<long long, bool> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]] = true;
    }

    for (int i = 0; i < n; i++) {
        if (mp.find(v[i] - k) != mp.end()) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
