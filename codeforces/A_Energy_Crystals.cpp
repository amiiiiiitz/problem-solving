
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x;
        cin >> x;
        long long i = 0,power = 0;
        while(i<=x) {
            i = pow(2,power);
            power++;
        }
        cout << ((power - 1) * 2) + 1 << endl;
    }
    return 0;
}