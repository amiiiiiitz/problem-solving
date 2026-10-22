#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        char c = CHAR_MAX;
        for(int i = 0; s[i]!= '\0'; i++) c = min(s[i], c);
        
        cout << c << endl;
    }
    return 0;
}
