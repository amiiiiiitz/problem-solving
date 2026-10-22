#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> x(q);
        for (int i = 0; i < q; i++) {
            cin >> x[i];
        }

        long long prev = 31;
        for (int i = 0; i < q; i++) {
            if (x[i] >= prev) continue;
            long long val = pow(2, x[i]);
            for (int j = 0; j < n; j++) {
                if (a[j] % val == 0) {
                    a[j] += (val / 2);
                }
            }
            prev = x[i];
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
