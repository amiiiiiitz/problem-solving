#include<iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n]; bool hard = false;
    for(int i = 0; i<n; i++) {
        cin >> a[i];
        if(!hard && a[i] == 1) hard = true;
    }
    if(hard) cout << "HARD" << endl;
    else cout << "EASY" << endl;
}