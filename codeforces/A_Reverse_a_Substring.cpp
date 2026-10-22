#include<iostream>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;

    int found = 0;

    for(long long i = 1; i < n; i++) {
        if(s[i - 1] > s[i]) {
            cout << "YES" << endl;
            cout << i << " " << i + 1;
            found = 1;
            break;
        }
    }

    if(found == 0) cout << "NO" << endl;


    return 0;
}