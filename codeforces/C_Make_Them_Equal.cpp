#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;

        bool allSame = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != c) {
                allSame = false;
                break;
            }
        }

        if (allSame) {
            cout << "0\n";
            continue;
        }

        bool found = false;
        for (int i = 1; i <= n; i++) {
            bool ok = true;
            for (int j = i; j <= n; j += i) {
                if (s[j - 1] != c) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << "1\n" << i << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "2\n" << n << " " << n - 1 << "\n";
        }
    }

    return 0;
}

