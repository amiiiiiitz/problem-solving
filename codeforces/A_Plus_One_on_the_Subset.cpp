#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int max = 0, min = 10000000000;
        for(int i = 0; i<n; i++){
            cin >> a[i];
            if(a[i] > max){
                max = a[i];
            }
            if(a[i] < min){
                min = a[i];
            }
        }
        cout << max - min << endl;
    }
    return 0;
}