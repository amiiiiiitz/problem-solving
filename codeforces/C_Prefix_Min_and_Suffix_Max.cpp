#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];

        map<int, int> mp;
        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < n; ++i) {
            if (v[i] < mn) {
                mn = v[i];
                mp[v[i]] = 1;
            }
        }

        for (int i = n - 1; i >= 0; --i) {
            if (v[i] > mx) {
                mx = v[i];
                mp[v[i]] = 1;
            }
        }

        for (int i = 0; i < n; ++i) cout << mp[v[i]];
        cout << '\n';
    }

    return 0;
}
