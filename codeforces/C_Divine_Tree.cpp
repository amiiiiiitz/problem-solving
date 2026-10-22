#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int testCases;
    cin >> testCases;
 
    while (testCases--) {
        int n;
        long long m;
        cin >> n >> m;
 
        long long minSum = n; // when all values are 1
        long long maxSum = (long long)n * (n + 1) / 2;
 
        if (m < minSum || m > maxSum) {
            cout << "-1\n";
            continue;
        }
 
        vector<int> values(n);
        for (int i = 0; i < n; i++) {
            values[i] = i + 1; // initial values: 1 to n
        }
 
        long long extra = maxSum - m;
 
        for (int i = n - 1; i >= 0 && extra > 0; i--) {
            int reduce = min((long long)(values[i] - 1), extra);
            values[i] -= reduce;
            extra -= reduce;
        }
 
        int root = *max_element(values.begin(), values.end());
        cout << root << "\n";
 
        for (int i = 0; i < n; i++) {
            if (values[i] == i + 1) {
                if (i + 1 == root) continue; // skip root
                cout << i + 1 << " " << root << "\n";
            } else {
                cout << i + 1 << " " << values[i] << "\n";
            }
        }
    }
 
    return 0;
}