#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (v[0] != 1) {
        cout << "No" << endl;
        return;
    }
    long long sum = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] > sum) {
            cout << "No" << endl;
            return;
        }
        sum += v[i];
    }
    cout << "Yes" << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
