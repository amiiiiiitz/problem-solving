#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int fac = 1, i = 1;
        if(n==0){
            cout << 1 << endl;
        }else{
            while(i<=n){
                fac = fac * i;
                i++;
            }
           cout << fac << endl;     
        }
        
    }
    return 0;
}
