#include <bits/stdc++.h>

using namespace std;

void solve() {
		int n; cin >> n;
		string s; cin >> s;

		// bal[i] = prefix balance up to i ( '(' = +1, ')' = -1 )
		// A regular sequence never lets balance go below 0 and ends at 0
		vector<int> bal(n);
		bal[0] = (s[0] == '(' ? 1 : -1);
		for (int i = 1; i < n; i++) {
				bal[i] = bal[i - 1] + (s[i] == '(' ? 1 : -1);
		}

		// If total balance != 0, it's impossible to split into beautiful subsequences
		if (bal[n - 1] != 0) {
				cout << -1 << '\n';
				return;
		}

		// If the sequence never went negative, it's already regular -> 1 color suffices
		if (*min_element(bal.begin(), bal.end()) == 0) {
				cout << 1 << '\n';
				for (int i = 0; i < n; i++) cout << 1 << ' ';
				cout << '\n';
				return;
		}
		// If the sequence never went positive, reversed sequence is regular -> 1 color suffices
		else if (*max_element(bal.begin(), bal.end()) == 0) {
				cout << 1 << '\n';
				for (int i = 0; i < n; i++) cout << 1 << ' ';
				cout << '\n';
				return;
		}

		// Otherwise, 2 colors are enough and necessary.
		// Assign color 1 to positions where current prefix balance is positive,
		// color 2 where it's negative. When balance is zero, inherit the side from bal[i-1]
		// to correctly finish the current subsequence.
		vector<int> ans(n);
		for (int i = 0; i < n; i++) {
				if (bal[i] > 0) ans[i] = 1;
				else if (bal[i] < 0) ans[i] = 2;
				else ans[i] = (bal[i - 1] > 0 ? 1 : 2);
		}

		cout << 2 << '\n';
		for (int i = 0; i < n; i++) cout << ans[i] << ' ';
		cout << '\n';
}

int main() {
		int t;
		cin >> t;
		for (int i = 0; i < t; i++) solve();
}

