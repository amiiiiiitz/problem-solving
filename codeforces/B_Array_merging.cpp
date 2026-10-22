#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        unordered_map<int, int> freq_a, freq_b;

        int current = 0, count = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0 && a[i] == a[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            freq_a[a[i]] = max(freq_a[a[i]], count);
        }

        count = 1;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (i > 0 && b[i] == b[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            freq_b[b[i]] = max(freq_b[b[i]], count);
        }

        int result = 0;
        for (auto [val, streak] : freq_a) {
            result = max(result, streak + freq_b[val]);
        }
        for (auto [val, streak] : freq_b) {
            result = max(result, streak + freq_a[val]);
        }

        cout << result << endl;
    }
    return 0;
}
