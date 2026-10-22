#include<iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int a,b; cin >> a >> b;
		int A = a, B = b;
		int ans = 0, divider = 1;

		while(1) {
			if(ans % 2 == 1 && divider > b) break;
			else if(ans % 2 == 0 && divider > a) break;
			
			if(a == 1 && b == 1) break;

			ans++;

			if(ans % 2 == 1) a -= divider;
			else if(ans % 2 == 0) b -= divider;

			divider *= 2;
		}

		int ans1 = 0; divider = 1;
		
		while(1) {
			
			if(ans1 % 2 == 1 && divider > A) break;
			else if(ans1 % 2 == 0 && divider > B) break;
			
			if(A == 1 && B == 1) {ans1 = 1; break;}

			ans1++;
				
			if(ans1 % 2 == 1) B -= divider;
			else if(ans1 % 2 == 0) A -= divider;

			divider *= 2;
		}
		cout << max(ans, ans1) << endl;
	}
}