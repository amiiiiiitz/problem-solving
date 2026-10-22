#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n,k,q,i, sum = 0,num;
        cin >> n >> k >> q;

        vector<long long> v(n);
        vector<long long> c;
        for(i = 0; i<n; i++) {
            cin >> v[i];
            if(v[i] > q) c.push_back(i+1);
        }

        long long len = c.size();
        if(len == n || k == 0 || k > n - len) {
            sum = 0;
        }else if(len == 0) {
            n = n - k + 1;
            sum = n * (n+1) / 2;
        }else {

            for(i = 0; i <= len; i++) {
                if(i == len) {
                    num = n - c[i-1];
                    if(num >= k) {
                        num = num - k + 1;
                        sum += (num * (num + 1) / 2);
                    }
                }else if(i == 0) {
                    num = c[i] - 1;
                    if(num >= k) {
                        num = num - k + 1;
                        sum += (num * (num + 1) / 2);
                    }
                    
                }else if (i < len){
                    num = c[i] - (c[i-1] + 1);
                    if(num >= k) {
                        num = num - k + 1;
                        sum += (num * (num + 1) / 2);
                    }
                }
            
            }
        
        }    
        cout << sum << endl;
    }
    return 0;
}