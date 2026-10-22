#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    vector<int> v(1001, 0);
	    for(int i = 0; i < n; i++) {
	        v[a[i]] = i + 1;
	    }
	    int ans = -1;
	    for(int i = 1; i < v.size(); i++) {
	        for(int j = 1; j < v.size(); j++) {
	            if(v[i] && v[j] && gcd(i, j) == 1) ans = max(ans, v[i] + v[j]);
	        }
	    }
	    cout << ans << endl;
	}
}
