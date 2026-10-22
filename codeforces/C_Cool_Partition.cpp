#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, i;
        cin >> n;

        vector<long long> a(n);
        for(auto &x : a) cin >> x;

        set<long long> prev, total; int p = 0;

        for(long long i = 0; i< n; i++) {
            total.insert(a[i]);
            if(prev.count(a[i])) {
                prev.erase(a[i]);
            }
            if(prev.size() == 0) {
                p++;
                prev = total;
            }
        }
        cout << p << endl;
 
    }
    return 0;
}
