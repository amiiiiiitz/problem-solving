#include<iostream>
#include<string>
using namespace std;

char nextChar(char c) {
    if (c == 'z') return 'a';
    return c + 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int i;
        bool inserted = false;

        if(s.length() > 1) {
            for(i = 1; i < s.length(); i++) {
                if(s[i-1] == s[i]) {
                    char newChar = nextChar(s[i]);
                    s.insert(s.begin() + i, newChar);
                    inserted = true;
                    break;
                }
            }
        }

        if (!inserted) {
            char newChar = nextChar(s[0]);
            s.insert(s.begin(), newChar);
        }

        cout << s << endl;
    }
    return 0;
}
