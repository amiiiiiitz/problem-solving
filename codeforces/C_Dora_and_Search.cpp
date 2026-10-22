#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &val:a) cin>>val;

        int l=0,r=n-1,mini=1,maxi=n;
        while(l<r){
            if(a[l] == mini) {
                l++;
                mini++;
            }
            else if(a[l] == maxi){
                l++;
                maxi--;
            }
            else if(a[r] == mini){
                r--;
                mini++;
            }
            else if(a[r] == maxi){
                maxi--;
                r--;
            }
            else break;
        }

    if(l<r) cout << l+1 <<" "<< r+1 << endl;
    else cout << -1 << endl;
 }

    return 0;
}