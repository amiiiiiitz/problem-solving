#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, p, q; cin >> n >> m >> p >> q;
        
        if(n % p != 0) cout << "YES" << endl;
        else if(n % p == 0 && (n/p) * q == m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}