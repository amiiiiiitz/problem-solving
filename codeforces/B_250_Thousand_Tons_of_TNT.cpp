#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> v(n);
        for(auto &x: v) cin >> x;

        vector<long long> pre(n);
        pre[0] = v[0];
        for(int i = 1; i < n; i++) {
            pre[i] = pre[i-1] + v[i];
        }

        long long ans = 0;

        for(int k = 1; k <= n; k++) {
            if(n % k != 0) continue;

            long long maxi, mini;
            maxi = mini = pre[k-1];

            for(int i = k; i < n; i += k) {
                long long sum_k = pre[i + k - 1] - pre[i - 1];
                maxi = max(maxi, sum_k);
                mini = min(mini, sum_k);
            }

            ans = max(ans, maxi - mini);
        }

        cout << ans << endl;
    }
}
