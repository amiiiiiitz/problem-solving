#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,k,b,s;
        cin >> n >> k >> b >> s;

        vector<long long> num(n,0);
        
        if (b == 0) {
            if (s > n * (k - 1)) {
                cout << "-1" << endl;
                continue;
            }
            long long rem = s;
            for (long long i = 0; i < n && rem > 0; ++i) {
                num[i] = min(rem, k - 1);
                rem -= num[i];
            }
            for (auto val : num) {
                cout << val << " ";
            }
            cout << endl;
            continue;
        }

        long long multi = k * b, rem_val = 0;
        if(s - multi > k) {
            rem_val = s - (multi + k - 1);
            num[0] = multi + k - 1;
            long long value = k - 1;
            for(long long i = 0; i<n; i++) {
                if(rem_val > 0 && num[i] == 0 && value <= rem_val) {
                    num[i] = value;
                    rem_val -= value;
                }
                if(value > rem_val && rem_val > 0) {
                    value = rem_val;
                    i--;
                }
                if(rem_val <= 0) break;
            
            }
        }else if(s - multi < k && s - multi >=1) {
            num[0] = multi + (s-multi);
        }else if(s - multi == 0){
            num[0] = multi;
        }else {
            rem_val = INT_MAX;
        }

        
        if(rem_val <= 0) {
            for(auto val : num) cout << val << " ";
        }else cout << "-1";

        cout << endl;
        
        
    }
    return 0;
}
