#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int count = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') count++;
            if(count > 0 && s[i] == ')') count--;
        }

        cout << abs(count) << endl;
    }
}