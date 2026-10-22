#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		long long n; cin >> n;
		long long a[n];
		for(auto &i : a) cin >> i;

		long long l = 0, r = n-1, ans = 0, sumL = 0, sumR = 0;

		while(l<=r) {
			if(sumL<sumR)
				sumL += a[l++];
			else if(sumL>=sumR)
				sumR += a[r--];
			if(sumL == sumR)
				ans = max(ans, l + (n-r)-1);
		}
		cout << ans << '\n';
	}
}