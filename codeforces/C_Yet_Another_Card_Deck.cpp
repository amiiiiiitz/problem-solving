#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	
	for(int i = 0; i < q; i++) {
		int x;
		cin >> x;
		int p = find(v.begin(), v.end(), x) - v.begin();
		cout << p + 1 << " ";
		rotate(v.begin(), v.begin() + p, v.begin() + p + 1);	
	}
}
