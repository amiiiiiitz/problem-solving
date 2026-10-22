#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >> k;
        string s; cin >> s;
        vector<long long> prefix(n + 1, 0);

        for(long long i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (s[i] == 'W');
        }

        long long minimumCells = INT_MAX;
        for(long long i = 0; i <= n - k; i++) {
            long long diff = prefix[i + k] - prefix[i];
            minimumCells = min(minimumCells, diff);
        }

        cout << minimumCells << endl;
    }
    return 0;
}
