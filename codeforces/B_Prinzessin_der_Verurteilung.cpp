#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int n;
        string s;
        cin >> n >> s;

        queue<string> q;
        q.push("");

        while (true) {
            string mex = q.front();
            q.pop();

            for (char c = 'a'; c <= 'z'; c++) {
                mex.push_back(c);
                
                if (s.find(mex) == string::npos) {
                    cout << mex << endl;
                    return;
                }
                q.push(mex);
                mex.pop_back();
            }
        }
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Solution s;
        s.solve();
    }

    return 0;
}
