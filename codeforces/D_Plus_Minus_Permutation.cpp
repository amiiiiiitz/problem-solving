#include <iostream>
#include <algorithm>
#include<numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long X = n / x;
        long long Y = n / y;
        long long Z = n / lcm(x, y);
        X -= Z;
        Y -= Z;
        long long ysum = Y * (1 + Y) / 2;
        long long xsum = X * (n + (n - X + 1)) / 2;
        cout << xsum - ysum << "\n";
    }
    return 0;
}
