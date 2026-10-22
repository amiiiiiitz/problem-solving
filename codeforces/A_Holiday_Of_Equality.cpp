#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_welfare = *max_element(a, a + n);
    
    long long sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += (max_welfare - a[i]);
    }
    
    cout << sum << endl;
    
    return 0;
}
