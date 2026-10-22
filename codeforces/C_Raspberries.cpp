#include<iostream>
#include<string>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,k,i,ans = INT_MAX,count = 0;
        cin >> n >> k;
        long long a[n];
        for(i = 0; i<n; i++){
            cin >> a[i];
        }
        for(i = 0; i<n; i++){
            if(a[i] % k == 0){
                ans = 0;
                break;
            }else{
                ans = min(ans, (k - a[i] % k));
            }
            
            if(a[i] % 2 == 0){
                count++;
            }        
        }
        if(k == 4){
            if(count >=2){
                ans = min(ans, 0LL);
            }else if(count == 1){
                ans = min(ans, 1LL);
            }else{
                ans = min(ans, 2LL);
            }
        }
        cout << ans << endl;
    }
    return 0;
}