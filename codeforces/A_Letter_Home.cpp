#include<iostream>
#include<vector>

using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        long long n,s,index = 0; cin >> n >> s;
        vector<long long> a(n); 
        for (long long i = 0; i<n ; i++) {
            cin >> a[i] ;
        } 
        long long pos1 = abs(s-a[0]);
        long long pos2 = abs(s-a[n-1]);
        long long pos = min(pos1,pos2);
        cout << pos + a[n-1] - a[0]<< endl;
        
    }
}