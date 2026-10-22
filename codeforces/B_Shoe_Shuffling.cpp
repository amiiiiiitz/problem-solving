#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        vector<long long> p(n);
        for(auto &val : p) cin >> val;

        map<long long, long long> freq;
        for(long long i = 0; i<n; i++) freq[p[i]]++;

        long long flag = 0;
        for(auto val: freq) {
            if(val.second == 1){
                flag = 1;
                break;
            }
        }
        if(flag) {
            cout << -1 << endl;
            continue;
        }

        vector<long long> v(n);
        for(long long i = 0; i<n; i++) {
            v[i] = i+1;
        }
        long long l = 0, r = 0;
        while(r < n) {
            if(p[l] == p[r]) {
                r++;
            }else {
                rotate(v.begin() + l, v.begin() + l + 1, v.begin() + r);
                l = r;
            }
        }
        rotate(v.begin() + l, v.begin() + l + 1, v.begin() + r);

        for(auto x : v) cout << x << " ";

        cout << endl;
        
    }
    return 0;
}