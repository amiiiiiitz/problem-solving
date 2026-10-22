#include<iostream>
using namespace std;
#define ll long long
int main() {
    ll t; cin >> t;
    while(t--) {
        ll n,k; cin >> n >> k;
        ll a[n*n];

        for(ll i = 0; i<n*n; i++) cin >> a[i];

        ll count = 0;

        for(ll i = 0, y = (n*n) - 1; i<y; i++,y--) {
            if(a[i] != a[y]) count++;
        }
        
        if(count>k){
            cout<<"NO"<<endl;
        }
        else{
            ll temp = k-count;
            if(temp % 2 == 0)cout<<"YES"<<endl;
            else{
                if(n % 2 == 0)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    }
}
