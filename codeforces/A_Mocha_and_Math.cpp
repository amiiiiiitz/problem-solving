#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,i,ans;
        cin >> n;
        vector<int> a(n);
        for(i = 0; i<n; i++){
            cin >> a[i];
        }
        ans = a[0];
        for(i = 1; i<n; i++){
            ans = ans & a[i];
        }
        cout << ans << endl;

    }
}