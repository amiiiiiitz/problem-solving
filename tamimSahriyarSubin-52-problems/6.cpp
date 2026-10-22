#include<iostream>
using namespace std;
int main(){
    int t,T;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 5;
        int sum = 0;
        
        for(;count>=1;count--){
            if(count==5 || count==1){
                int reminder = n % 10;
                sum = sum + reminder;
            }
            n = n / 10;   
        }
        cout << "Sum = "<< sum << endl;
       
    }
    return 0;
}