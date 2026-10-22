#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> v(n);

        for(auto &x: v) cin >> x;

        long long sum = v[0];
        long long maxi = v[0];
        for(int i = 1; i < n; i++) {
            if(sum < 0) sum = 0;

            if(abs(v[i-1] % 2) != abs(v[i] % 2)) {
                sum += v[i];
            } else {
                sum = v[i];
            }
            maxi = max(maxi, sum);
            
        }

        cout << maxi << endl;
    }
}
