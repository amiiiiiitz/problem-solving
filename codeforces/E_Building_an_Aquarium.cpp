#include <iostream>
#include <vector>
using namespace std;

bool check(long long mid, vector<long long>& heights, long long x) {
    long long units = 0;
    int n = heights.size();
    for (int i = 0; i < n; i++) {
        if (heights[i] < mid) {
            units += (mid - heights[i]);
        }
    }
    return units <= x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        long long si = 1, ei = 1000000000000LL, ans = -1;
        while (si <= ei) {
            long long mid = si + (ei - si) / 2;
            if (check(mid, heights, x)) {
                ans = mid;
                si = mid + 1;
            } else {
                ei = mid - 1;
            }
        }
        cout << ans << endl;
    }
}
