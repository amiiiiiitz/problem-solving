#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        a.push_back('0');
        b.push_back('0');

        int cnt = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            cnt += (a[i] == '1') - (a[i] == '0');
            if ((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0) {
                ok = false;
                break;
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
