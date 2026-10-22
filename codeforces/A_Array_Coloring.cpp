#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<pair<int, int> > a(n);

		for(int i = 0; i<n; i++) {
			cin >> a[i].first;
			if(i % 2 == 0) a[i].second = 1;
			else a[i].second = 0;
		}

		sort(a.begin(), a.end());

		bool possible = true;
		for(int i = 1; i<n; i++) {
			if(a[i].second == a[i-1].second) {
				possible = false;
				break;
			}
		}

		if(possible) cout << "YES\n";
		else cout << "NO\n";
		
	}
}