#include<iostream>
#include<algorithm>
using namespace std;

long long next_prime(long long d) {
   
    for(long long i = d; ; i++) {
        bool prime = true;
        for(long long j = 2; j * j <= i; j++) {
            if( i % j == 0) {
                prime = false;
                break;
            }
        }

        if(prime) return i;
    }
}
    
int main() {
    int t; cin >> t;
    while(t--) {
        long long d; cin >> d;
        
        long long n1 = next_prime(d + 1);
        long long n2 = next_prime(d + n1);

        long long a = min(1LL * n1 * n1 * n1, 1LL * n1 * n2);

        cout << a << endl;
    }
}