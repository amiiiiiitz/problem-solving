#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,i,j,ans=0;
        cin >> n;
        int a[n],b[n],c[n];

        for(i=0;i<n;i++) cin >> a[i];

        for(i=0;i<n;i++) cin >> b[i];

        for(i=0;i<n;i++) c[i]=b[i]-a[i];

        sort(c,c+n);

        i=0,j=n-1;
        while(i<j){
            if(abs(c[i])<=c[j]){
                ans++;
                j--;
            }
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}