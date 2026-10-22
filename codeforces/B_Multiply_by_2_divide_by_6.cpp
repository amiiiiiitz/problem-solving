#include<iostream>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        if(n == 1){
            ans = 0;
        }else{
            while(n!=1){
                if(n % 6 == 0){
                    n/=6;
                    ans++;
                }else if(n % 3 == 0){
                    n *= 2;
                    ans++;
                }else{
                    ans = -1;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}