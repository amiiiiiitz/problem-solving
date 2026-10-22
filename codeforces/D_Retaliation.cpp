#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n], i;
        for(i = 0; i<n; i++) cin >> a[i];

        bool o1 = true, o2 = true, o1_o2 = true;
        int divisor = a[0], divisor2;
        for(i = 0; i<n; i++) {
            if(a[i] % (i+1) != 0) {
                o1 = false; 
                break;
            }else{
                divisor2 = a[i] / (i+1);
                if(divisor != divisor2) {
                    o1 = false; 
                    break;
                }
            }
        }

        divisor = a[0] / n;
        for(i = 0; i<n; i++) {
            if(a[i] % (n - i) != 0) {
                o2 = false; 
                break;
            }else{
                divisor2 = a[i] / (n-i);
                if(divisor != divisor2) {
                    o2 = false; 
                    break;
                }
            }
        }

        divisor = (a[0] - 1) / n;
        for(i = 0; i<n; i++) {
            if((a[i] - (i + 1)) % (n - i) != 0) {
                o1_o2 = false; 
                break;
            }else{
                divisor2 = (a[i] - (i + 1)) / (n-i);
                if(divisor != divisor2) {
                    o1_o2 = false; 
                    break;
                }
            }
        }

        if(o1 == true || o2 ==  true || o1_o2 == true) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}