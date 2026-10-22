#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long a[n];

        long long ans = INT_MAX;
        for(long long i = 0; i<n; i++) {
            cin >> a[i];
            if(a[i] != i) {
                ans &= a[i];
            }
        }

        cout << ans << endl;
    }
}