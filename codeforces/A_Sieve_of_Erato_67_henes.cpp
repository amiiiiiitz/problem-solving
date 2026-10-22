#include<iostream>
using namespace std;

int main() { 
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int arr[n]; bool si7xty = false;
		for(int i = 0; i<n; i++) cin >> arr[i];
		for(int i = 0; i<n; i++) {
			if(arr[i] == 67) {
				si7xty = true;
				break;
			}
		}
		if(si7xty) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}