#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        long long n,j,k; cin >> n >> j >> k;
        long long a[n],maxN = INT_MIN;

        for(int i = 0; i<n; i++) {
            cin >> a[i];
            maxN = max(maxN, a[i]);
        }

        
        if(k == 1 && maxN != a[j-1]) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }

    return 0;
}