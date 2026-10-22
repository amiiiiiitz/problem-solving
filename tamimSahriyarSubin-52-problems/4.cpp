#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int c_no = 1;
    while(t--){
        int n;
        cin >> n;
        cout << "Case"<<" "<<c_no<< ":" << " ";
        for(int i=1; i<=n; i++){
            if(n % i == 0){
                cout << i;
                if(i<n){
                cout << " ";
                }
            }
        }
        cout << endl;
        c_no++;
    }
    return 0;
}