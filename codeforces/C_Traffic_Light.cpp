#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,ans = 0, c_pos, dif = 0,f_pos; 
        cin >> n;
        char c; cin >> c;
        string s;
        cin >> s;
        bool found = false, f_found = false;
        for(long long i = 0; i<s.length(); i++) {
            if(s[i] == c && found == false) {
                found = true;
                c_pos = i + 1;
            }
            if(found ==  true && s[i] == 'g') {
                dif = (i + 1) - c_pos;
                ans = max(ans, dif);
                found = false;
            }
            if(s[i] == 'g' && f_found == false) {
                f_pos = i+1;
                f_found = true;
            }
        }
        if(found == true) {
            long long d = (s.length() - c_pos) + f_pos;
            ans = max(ans, d);
        }

        cout << ans << endl;
    }
    return 0;
}