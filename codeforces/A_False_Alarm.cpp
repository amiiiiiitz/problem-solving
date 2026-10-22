#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n >> x;

        int a[n];

        int i;
        bool pass = true;
        for(i = 0; i<n; i++) cin >> a[i];

        for(i = 0; i<n; i++) {
            if(a[i] == 1 && x > 0) {
                i = x + i - 1;
                x = 0;
            }else if(a[i] == 1 && x == 0) {
                pass = false;
                break;
            }
        }

        if(pass == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}