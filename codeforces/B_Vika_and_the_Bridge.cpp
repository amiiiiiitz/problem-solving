#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> last(k, -1);              // last seen index of each color
        vector<int> max1(k, 0), max2(k, 0);  // top two max gaps for each color

        for (int i = 0; i < n; i++) {
            int x; cin >> x; --x;
            int gap = i - last[x] - 1;
            last[x] = i;

            // maintain top 2 maximum gaps
            if (gap > max1[x]) {
                max2[x] = max1[x];
                max1[x] = gap;
            } else if (gap > max2[x]) {
                max2[x] = gap;
            }
        }

        int best = n;
        for (int c = 0; c < k; c++) {
            int gap = n - last[c] - 1;  // gap after last occurrence
            if (gap > max1[c]) {
                max2[c] = max1[c];
                max1[c] = gap;
            } else if (gap > max2[c]) {
                max2[c] = gap;
            }

            // answer for this color
            best = min(best, max(max1[c] / 2, max2[c]));
        }
        cout << best << "\n";
    }
    return 0;
}
