#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a; cin >> a;

        map<int, int> m;
        vector<int> distinct(n);
        int count = 0 ,ans = 0;
        for(int i = 0; i<n; i++) {
            m[a[i]]++;
            if(m[a[i]] == 1) count++;
            distinct[i] = count;
            ans += distinct[i];
        }
        
        cout << ans << endl;

    }
}

