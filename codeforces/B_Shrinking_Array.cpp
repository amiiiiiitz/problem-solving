#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void sol(int t) {
    long long n;
    cin >> n;
    vector<long long> v(n);
    bool no_move = false;
    bool one_move = false;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        int current = i;
        int prev = current - 1;
        int next = current + 1;

        if (next < n) {
            if (abs(v[next] - v[current]) <= 1) {
                no_move = true;
                break;
            }
        }

        if (prev >= 0 && next < n) {
            long long a = v[prev], b = v[current], c = v[next];
            long long d = a, e = b, f = c;

            if (a > b) swap(a, b);
            if (a <= c && c <= b) {
                one_move = true;
            }

            if (e > f) swap(e, f);
            if (d >= e && d <= f) {
                one_move = true;
            }
        }
    }

    if (no_move) cout << 0 << "\n";
    else if (one_move) cout << 1 << "\n";
    else cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        sol(i);
    }

    return 0;
}
