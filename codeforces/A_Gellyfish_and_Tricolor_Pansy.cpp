#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a>=d && c>=d) {
            cout << "Gellyfish" << endl;
        }else if(a>=b && c>=b){
            cout << "Gellyfish" << endl;
        }else if(a>=b && c>=d) {
            cout << "Gellyfish" << endl;
        }else{
            cout << "Flower" << endl;
        } 
    }
    return 0;
}