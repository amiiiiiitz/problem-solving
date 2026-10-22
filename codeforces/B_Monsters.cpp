#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<long long, long long> p1, pair<long long, long long> p2) {
    if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false;
    if(p1.second < p2.second) return true;
        else return false;
}

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long n,k,i,j;
        cin >> n >> k;
        vector<pair<long long,long long>> v;
        for(i = 0 ; i<n ; i++) {
            cin >> j;
            if(j % k != 0) v.emplace_back(j % k,i+1);
            else v.emplace_back(k,i+1);
        }

        sort(v.begin(),v.end(),comparator);
        for (auto val : v) cout << val.second << " ";

        cout << endl;
    }
    return 0;
}