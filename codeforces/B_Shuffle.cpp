#include<iostream>
using namespace std;
typedef long long ll;
int main() {
    int t; cin >> t;
    while(t--) {
        ll n,m,x; cin >> n >> m >> x;
        ll mini = m, maxi = m;
        
        while (x--) {
            ll l,r; cin >> l >> r;

            if(l <= maxi && mini <= r) {
                mini = min(mini, l);
                maxi = max(maxi, r);
            }
        }
        cout << maxi - mini + 1 << endl;
    }
}


