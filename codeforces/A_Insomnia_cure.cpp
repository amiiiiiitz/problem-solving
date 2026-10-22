#include<iostream>
using namespace std;
int main() {
    int k,l,m,n,d; cin >> k >> l >> m >> n >> d;

    int a[d], count = 0;

    for(int i = 0; i < d; i++) a[i] = i + 1;

    for(int i = 0; i < d; i++) {
        if(a[i] % k != 0 && a[i] % l != 0 && a[i] % m != 0 && a[i] % n != 0) {
            count++;
        }
    }

    cout << d - count << endl;
    
}