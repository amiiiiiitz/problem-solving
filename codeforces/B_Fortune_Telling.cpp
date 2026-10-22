#include <bits/stdc++.h>
using namespace std;

void solve() {
		long long n, x, y;
		cin >> n >> x >> y;
		long long a[n];
		for (int i = 0; i < n; i++) {
				cin >> a[i];
		}

		int numOdds = 0;
		for (int i = 0; i < n; i++) { // count how many a[i] are odd
				if (a[i] % 2 == 1) numOdds++;
		}

		// Only parity (LSB) matters: both operations (+ and XOR) change parity by a[i] % 2
		int aliceStart = x % 2;         // parity of Alice's starting number
		int bobStart = 1 - aliceStart;  // x + 3 has flipped parity since 3 is odd

		int aliceEnd, bobEnd;
		if (numOdds % 2 == 0) {
				// Even number of odd elements -> overall parity unchanged
				aliceEnd = aliceStart;
				bobEnd = bobStart;
		} else {
				// Odd number of odd elements -> overall parity flips once
				aliceEnd = 1 - aliceStart;
				bobEnd = 1 - bobStart;
		}

		// Exactly one friend could reach y; check whose final parity matches y's
		if (y % 2 == aliceEnd) {
				cout << "Alice\n";
		} else {
				cout << "Bob\n";
		}
}

int main() {
		ios::sync_with_stdio(false); // faster I/O
		cin.tie(nullptr);

		int t;
		cin >> t;
		while (t--) {
				solve();
		}
}

/*
Time Complexity (TC): O(n)
Space Complexity (SC): O(1)
*/
