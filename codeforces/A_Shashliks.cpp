
#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long count = 0;

        if (k < a && k < b) {
            cout << 0 << endl;
            continue;
        }

        if (y < x) {
            if (k >= b) {
                long long type2_count = (k - b) / y + 1;
                k -= type2_count * y;
                count += type2_count;
            }
            if (k >= a) {
                long long type1_count = (k - a) / x + 1;
                count += type1_count;
            }
        } else {
            if (k >= a) {
                long long type1_count = (k - a) / x + 1;
                k -= type1_count * x;
                count += type1_count;
            }
            if (k >= b) {
                long long type2_count = (k - b) / y + 1;
                count += type2_count;
            }
        }

        cout << count << endl;
    }
}
