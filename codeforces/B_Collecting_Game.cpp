#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<long long, int>> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        for(auto x : v) cout << x.first << " " << x.second << endl;

        cout << endl;

        vector<long long> prefix_sum(n);

        prefix_sum[0] = v[0].first;

        for (int i = 1; i < n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + v[i].first;
        }

        vector<int> res(n);
        int ind = 0;
        for (int i = 0; i < n; i++) {
            ind = max(i, ind);
            while (ind + 1 < n && prefix_sum[ind] >= v[ind + 1].first) {
                ind++;
            }
            res[v[i].second] = ind; 
        }

        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << '\n';
    }
}
