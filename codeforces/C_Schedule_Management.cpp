#include <bits/stdc++.h>
using namespace std;

vector<int> fr;

// Checks if all m tasks can be finished within time t
bool check(int n, int m, int t) {
		long long maxPossible = 0; // total tasks that can be completed by all workers in t hours

		for (int i = 0; i < n; i++) {
				if (t < fr[i]) {
						// Only enough time to do t proficient tasks (1 hour each)
						maxPossible += t;
				} else {
						// Do all proficient tasks, then use remaining time for non-proficient tasks (2 hours per task)
						maxPossible += fr[i] + (t - fr[i]) / 2;
				}
		}

		return maxPossible >= m; // sufficient if we can cover all tasks
}

void solve() {
		int n, m;
		cin >> n >> m;
		fr.assign(n, 0); // reset frequency vector for this test case

		for (int i = 0; i < m; i++) {
				int temp;
				cin >> temp;
				fr[temp - 1]++; // task i is best done by worker (temp - 1)
		}

		int low = 0, high = 2 * m; // worst case: all tasks take 2 hours

		// Binary search the minimal time when it's possible to finish all tasks
		while (low < high) {
				int mid = (low + high) / 2;
				if (check(n, m, mid)) {
						high = mid; // time is sufficient, try smaller
				} else {
						low = mid + 1; // time is insufficient, try larger
				}
		}

		cout << low << '\n'; // minimal feasible time
}

int main() {
		cin.sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int t;
		cin >> t;

		while (t--) {
				solve();
		}
}

/*
Time Complexity (TC): O(nlogm + m)
Space Complexity (SC): O(n)
*/
