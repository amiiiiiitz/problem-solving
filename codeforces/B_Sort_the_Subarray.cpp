#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n], b[n];

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int i, j;
        int r = 0, l = n - 1, rr = 1, ll = 1;

        while(rr || ll) {
            if(a[r] != b[r] && rr == 1) {
                rr = 0;
                i = r;
            } else if(rr == 1) r++;

            if(a[l] != b[l] && ll == 1) {
                ll = 0;
                j = l;
            } else if(ll == 1) l--;
        }

        sort(a + r, a + l + 1);

        i = r - 1;
        while(i >= 0 && b[i] <= b[i + 1]) i--;
        r = i + 1;

        j = l + 1;
        while(j < n && b[j] >= b[j - 1]) j++;
        l = j - 1;

        cout << r + 1 << " " << l + 1 << endl;
    }
    return 0;
}
