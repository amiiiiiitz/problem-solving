#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;

        if(n % 2 == 1){
            long long i, j = 1, k = n - 1;
            for(i = 0; i < n; i++) {
                if(j<=n) {
                    cout << j << " ";
                    j = j+2;
                }else{
                    cout << k << " ";
                    k =  k - 2;
                }   
            }
        }else{
            long long i, j = 2, k = n - 1;
            for(i = 0; i < n; i++) {
                if(j<=n) {
                    cout << j << " ";
                    j = j+2;
                }else{
                    cout << k << " ";
                    k =  k - 2;
                }   

            }
        }
       
        
        cout << endl;

    }
    return 0;
}